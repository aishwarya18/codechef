#include<stdio.h>

int main()
{
	int t,i,j,flag;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		char s[100000];
		scanf("%s",s);
		flag=0;
		for(j=0;s[j]!='\0';j++)
		{
			if((s[j]=='0'&&s[j+1]=='1'&&s[j+2]=='0')||(s[j]=='1'&&s[j+1]=='0'&&s[j+2]=='1'))
			{
				
						printf("Good\n");
						flag=1;
						break;
					
			}
			
		}
		if(flag==0)
		{
			printf("Bad\n");
		}
	}
	return 0;
}
