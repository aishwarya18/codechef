#include<string.h>
#include<stdio.h>

#define MAX 1000

int arr[256];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[MAX];
		scanf("%s",s);
		int l,j,count=0;
		l=strlen(s);
		for(j=0;j<256;j++)
		{
			arr[j]=0;
		}
		for(j=0;j<l;j++)
		{
			arr[s[j]]++;
		}
		for(j=0;j<256;j++)
		{
			if(arr[j]%2!=0)
			{
				count++;
				arr[j]--;
			}
			count+=arr[j]/2;
		}
		printf("%d\n",count);
	}
	return 0;
}
