/*Write a program to swap value of two variables.
a=5,b=6
-swap-
a=6,b=5*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;

    a = 5;
    b = 6;
//c is a
    c = a;
    a = b;
    b = c;


    printf("The value of a = %d and b = %d after swap",a,b);
}
