#include<stdio.h>
int main()
{
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	i=0;
	int j=n-1,temp;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
