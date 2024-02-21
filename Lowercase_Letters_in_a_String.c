#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,count=0;
    scanf("%[^
]%c",str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]>='a'&& str[i]<='z')
        {
            count++;
        }
    }
    printf("%d
",count);
}