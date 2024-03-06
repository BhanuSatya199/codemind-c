#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        printf("%d %d ",arr[i],arr[n-1-i]);
    }
    if(n%2!=0)
    {
        printf("%d 0",arr[n/2]);
    }
    
}