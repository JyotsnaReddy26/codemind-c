#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}