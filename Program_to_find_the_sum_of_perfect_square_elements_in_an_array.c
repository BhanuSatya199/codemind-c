#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    int root,sum=0;
    for(i=0;i<n;i++)
    {
        root=sqrt(arr[i]);
        if(arr[i]>0 && root*root==arr[i]){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}

