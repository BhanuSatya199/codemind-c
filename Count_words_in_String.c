#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,count=0,isWord=0;
    scanf("%[^
]%c",str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]==' ' || str[i]=='	' || str[i]=='
'){
        isWord=0;}
        else if(isWord==0){
        isWord=1;
        count++;}
    }
    printf("%d
",count);
}