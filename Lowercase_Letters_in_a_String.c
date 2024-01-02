#include<stdio.h>
int countlowercase(char *str)
{
    int lowercasecount=0;
    while(*str)
    {
        if(*str>='a'&&*str<='z')
        {
            lowercasecount++;
        }
        str++;
    }
    return lowercasecount;
}
int main()
{
    char string[1000];
    scanf("%[^
]s",string);
    int result=countlowercase(string);
    printf("%d
",result);
}