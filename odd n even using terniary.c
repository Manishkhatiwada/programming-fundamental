/*
student name:manish khatiwada
program:wap to print even and odd using terniary operator
labsheet  no:11
roll no:16
date:09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter a number:\n");
scanf("%d",&a);
(a%2==0)?printf("the number is even"):printf("the number is odd");
getch();
return(0);
}
