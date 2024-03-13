#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x=a+b;
    y=b+c;
    z=a+c;
    if(x>y && x>z)
    {
        printf("%d",x);
    }
    else if(y>z && y>x)
    {
        printf("%d",y);
    }
    else if(z>x && z>y){
        printf("%d",z);
    }
}