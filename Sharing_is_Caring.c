#include<stdio.h>
int main()
{
    int y,x;
    scanf("%d%d",&y,&x);
    if(y>=(x*(x+1))/2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}