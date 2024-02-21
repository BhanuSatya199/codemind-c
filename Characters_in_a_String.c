#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int length=strlen(str);
    printf("%d",length);
}