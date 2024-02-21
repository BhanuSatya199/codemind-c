#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,count=0;
    scanf("%[^
]%c",str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
        count++;
    }
    }
    printf("%d
",count);
}