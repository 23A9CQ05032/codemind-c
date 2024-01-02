#include<stdio.h>
int countuppercase(char *str)
{
    int uppercasecount=0;
    while(*str)
    {
        if(*str>='A'&&*str<='Z')
        {
            uppercasecount++;
        }
        str++;
    }
    return uppercasecount;
}
int main()
{
    char string[1000];
    scanf("%[^
]s",string);
    int result=countuppercase(string);
    printf("%d
",result);
}