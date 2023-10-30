#include<stdio.h>
int main ()
{
int num, remider, Largest= 0;
scanf ("%d", &num);
while (num > 0) //9453>0
    {
remider = num % 10;//9453%10=3
if (Largest < remider)
 {
       Largest = remider;
 }
num = num / 10;
    }
printf ("%d", Largest);
}
