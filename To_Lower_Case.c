#include<stdio.h>
#include<cstring>
int main()
{
    char str[100],i;
    scanf("%[^
]%c",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}