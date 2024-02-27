#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f",s);
	printf("The area of triangle is:%f",area);
}
