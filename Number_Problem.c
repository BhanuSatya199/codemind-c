#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,p,q;
    scanf("%d%d",&a,&b);
    p=ceil(abs(a-b)/10.0);
    printf("%d",p);
}