
#include <stdio.h>

int main(void) {
	
	int t,i,maxi=0;
	int a[100],has[1000]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		if(maxi<a[i])
			maxi=a[i];	
	}
	for(i=0;i<=maxi;i++)
		has[a[i]]++;
	for(i=0;i<=maxi;i++)
	{
			if(has[i]>1)
			{
				printf("%d",i);
			break;
			}
	}
	return 0;
}
