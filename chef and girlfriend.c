#include<stdio.h>

int main()
 {
    int t,i;
    scanf("%d",&t);
    float h1,m1,h2,m2,dist,x,min1,min2,t1,t2;
    for(i=0;i<t;i++)
    {
        scanf("%f:%f%f:%f%f",&h1,&m1,&h2,&m2,&dist);
        t1=h1*60 + ( m1);
        t2= h2*60 + (m2);
        min1=t1-t2 + dist;
        x= t1-t2;
        if(dist*2 <= x)
        min2= x;
        else
		{
			min2= x/2 + dist;
         }
         printf("%.1f %.1f\n",min1,min2);
    }
    return 0;
}
