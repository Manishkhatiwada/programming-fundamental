#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    if(a>=b&&a>=c)
    {
        printf("a is greater");
    }
    else if(b>=a&&b>=c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");
    }
    getch();
    return(0);

}
