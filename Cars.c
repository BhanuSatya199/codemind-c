#include<stdio.h>
int main()
{
    int car;
    scanf("%d",&car);
    if(car%4==0)
    {
        printf("%d",car/4);
    }
    else
    {
        printf("%d",(car/4)+1);
    }
}