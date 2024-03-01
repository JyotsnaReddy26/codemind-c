#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d\n",a<b && a<c&& c<d);
	printf("%d\n",a>b||a>d||a>c);
	printf("%d\n",!(a>b));
}
