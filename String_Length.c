#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int length=strlen(str);
    printf("%d",length);
    return 0;
}