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
void insertion_sort(int a[],int size)
{
	int i;
	for(i=1;i<size;i++)
	{
		int key,j;
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key )
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sorting:");
	print_array(a,n);
	insertion_sort(a,n);
	printf("after sorting:");
	print_array(a,n);
	return 0;
}
