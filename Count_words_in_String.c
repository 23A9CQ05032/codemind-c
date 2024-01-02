#include<stdio.h>
int countwords(char *str)
{
    int wordcount=0;
    int isword=0;
    while(*str)
    {
        if(*str==' '||*str=='	'||*str=='
')
        {
            isword=0;
        }
        else if (isword==0)
        {
            isword=1;
            wordcount++;
        }
        str++;
    }
    return wordcount;
}
int main()
{
    char string[1000];
    scanf("%[^
]s",string);
    int result=countwords(string);
    printf("%d
",result);
}