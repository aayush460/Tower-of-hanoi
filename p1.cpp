#include<bits/stdc++.h>
using namespace std;

void toh(int x,char a,char b,char c)
{
	if(x == 1)
	{
		cout<<"move "<<x<<" from "<<a<<" to "<<c<<endl;
	}
	
	else{

    toh(x-1,a,c,b);
	cout<<"move "<<x<<" from "<<a<<" to "<<c<<endl;
	toh(x-1,b,a,c);
}
	
}
int main()
{
	int x; cin >> x;
	
	toh(x,'A','B','C');
}
