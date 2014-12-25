#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[100050];
		cin>>a;
		int l=strlen(a);
		int i,bal=0,maxbal=0;
		for(i=0;i<l;i++)
		{
			if(a[i]=='(')
			{
				bal++;
			}
			else
			{
				bal--;
			}
			maxbal=max(maxbal,bal);
		}
		for(i=0;i<maxbal;i++)
		{
			cout<<"(";
		}
		for(i=0;i<maxbal;i++)
		{
			cout<<")";
		}
		cout<<endl;
	}
}
