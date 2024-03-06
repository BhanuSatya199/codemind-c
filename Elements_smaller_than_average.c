#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,average;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    average=sum/n;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=average)
        {
            count++;
        }
    }
    printf("%d",count);
}