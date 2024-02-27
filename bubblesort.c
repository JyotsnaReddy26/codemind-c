#include<stdio.h>
void print_array(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
}
void bubble_sort(int a[],int size)
{
	int i;
	for( i=0;i<size;i++)
	{
		int j;
		for( j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
		
	}
	printf("before sorting:");
	print_array(arr,n);
	bubble_sort(arr,n);
	printf("after sorting:");
	print_array(arr,n);
	return 0;
}
