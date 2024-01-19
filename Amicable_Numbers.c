#include<stdio.h>
int main()
{
    int num1,num2,i;
    scanf("%d%d",&num1,&num2);
    int sum1=0,sum2=0;   
        for(i=1;i<num1;i++)
        {
            if(num1%i==0)
            {
                sum1=sum1+i;
            }
        }
        for(i=1;i<num2;i++)
        {
            if(num2%i==0)
            {
                sum2=sum2+i;
            }
        }
        if((num1==sum2)&&(num2==sum1))
        {
            printf("Amicable");
        }
        else
        {
            printf("Not Amicable");
        }
}