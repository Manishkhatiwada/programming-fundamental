/*
student name:manish khatiwada
roll_no:16
subject:programming fundamental
program:wap to check the result of a student
labsheet no:10
date:05/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0;
    printf("enter the first number/n");
    scanf("%d",&a);
    if(a>=80&&a<100)
    {
        printf("you are passed in distinction");
    }
    if(a>=60 &&a<70)
    {
        printf("you are passed in first division");
    }
    if(a>=50&&a<60)
    {
        printf("you are passed in second division");
    }
    if(a>=40&&a<50)
    {
        printf("you are passed in third division");
    }
    getch();
    return(0);
}
