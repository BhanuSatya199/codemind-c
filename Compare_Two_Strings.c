#include<stdio.h>  
#include<string.h>  
int main()  
{  
char str1[20], str2[20];  
int res;   
scanf("%s",str1);  
scanf("%s",str2);  
res = strcmp(str1,str2);  
if(res==0)  
{
    printf("Strings are Equal");
}
else
{
    printf("Strings are not Equal");
}
}