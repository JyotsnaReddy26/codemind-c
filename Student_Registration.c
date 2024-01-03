#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a<b-c)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        n--;
        
    }
}