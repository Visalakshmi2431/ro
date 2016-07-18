#include<stdio.h>
#include<conio.h>
int main()
{
char a;
clrscr();
printf("I,V,X,L,C,D,M,\0");
printf("\nchoose any one roman number");
scanf("%c",&a);
printf("\nNew :%c",a);
switch(a)
{
case 'I':
printf("\nValue=1");
break;
case 'V':
printf("\nValue=5");
break;
case 'X':
printf("\nValue=10");
break;
case 'L':
printf("\nValue=50");
break;
case 'C':
printf("\nValue=100");
break;
case 'D':
printf("\nValue=500");
break;
case 'M':
printf("\nValue=1000");
break;
case '\0':
printf("\n0");
break;
}
getch();
return 0;
}
