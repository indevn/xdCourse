#include<stdio.h>
int main()
{
	int n,i,j,j1,j2,c1,c2,k;
	struct stu
	{
		int h;
		int z;
	}l[100],t;
    
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++)
	{
		scanf("%d %d:%d %d:%d",&l[i].h,&j1,&j2,&c1,&c2);
		l[i].z=c1*60+c2-j1*60-j2;
	}
	for(i=1;i<n;i++)
		for(j=0;j<i;j++)
			if(l[i].h==l[j].h)
			{
				l[j].z+=l[i].z;
				l[i].z=0;
				l[i].h=0;
			}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(l[j].z<l[j+1].z)
			{
				t=l[j];l[j]=l[j+1];l[j+1]=t;
			}
			else if(l[j].z==l[j+1].z)
			{
				if(l[j].h>l[j+1].h)
					t=l[j];l[j]=l[j+1];l[j+1]=t;
			}
	for(i=0;i<n;i++)
	{
		if(l[i].h!=0) printf("%d %d\n",l[i].h,l[i].z);
	}
	return 0;
}