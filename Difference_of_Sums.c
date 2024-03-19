#include<stdio.h>
#include<math.h>
int main()
{
    int n,s1,s2,s3;
    scanf("%d",&n);
    s1=(n*(n+1)*(2*n+1))/6;
    s2=(n*(n+1))/2;
    s3=pow(s2,2);
    printf("%d",abs(s3-s1));
}