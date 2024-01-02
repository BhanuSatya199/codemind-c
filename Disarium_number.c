#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {
        temp%10;
        count++;
        temp/=10;
    }
    int i=0,sum=0,temp1=n,r;
    while(temp1!=0)
    {
        i=temp1%10;
        r=pow(i,count);
        sum=sum+r;
        count--;
        temp1/=10;
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