#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=n;j>0;j--)
        {
            if(j==i||j==n-i+1)
            {
                printf("%d",i);
            }
            else printf(" ");
        }
        printf("
");
    }
}