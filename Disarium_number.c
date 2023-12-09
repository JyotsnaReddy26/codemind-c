#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num1=n,c=0;
    while(num1!=0)
    {
        num1/=10;
        c++;
    }
    num1=n;
    int sum=0;
    while(num1!=0)
    {
        int r=num1%10;
        sum+=pow(r,c);
        num1/=10;
        c--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}