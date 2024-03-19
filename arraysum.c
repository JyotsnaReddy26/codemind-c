#include<stdio.h>
#include<stdlib.h>
int sum_array(int arr[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int value= sum_array(arr,n);
	printf("%d",value);
}
