#include<stdio.h>
int countvowels(char *str)
{
    int vowelcount=0;
    while(*str)
    {
        char ch=*str;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowelcount++;
        }
        str++;
    }
    return vowelcount;
}
int main()
{
    char string[100];
    scanf("%[^
]s",string);
    int result=countvowels(string);
    printf("%d
",result);
    return 0;
}