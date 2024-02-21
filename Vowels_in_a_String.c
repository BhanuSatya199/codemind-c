#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,ch,found=0;
    scanf("%[^
]%c",str);
    scanf("%c",&ch);
for(i=0;str[i]!=NULL;i++)
{
    if(str[i]==ch){
    found=1;
    break;}
}
if(found)
{
    printf("True
");
    printf("%d",i);
}
else
{
    printf("False");
}
}