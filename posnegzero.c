#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("\n enter the number");
scanf("%d",&a);
if(a==0)
    printf("\nthe number is zero");
else if(a<0)
    printf("\n the number is negative");
else
    printf("\n the number is positive");
getch();

}
