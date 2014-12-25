#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[10000];
		int i;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int res=1;
		for(i=1;i<n;i++)
		{
			if(arr[i-1]>=arr[i])
				res++;
			else
			{
				arr[i]=arr[i-1];
			}
		}
		cout<<res<<endl;
	}
}
