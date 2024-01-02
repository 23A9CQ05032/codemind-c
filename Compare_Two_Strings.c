#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int result=strcmp(str1,str2);
    if(result==0) printf("Strings are Equal");
    else printf("Strings are not Equal");
}