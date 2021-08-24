//Q 5. Write a program to calculate compound interest.
#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
    float ci,p,r,t;

    printf("Enter The Principal : ");
    scanf("%f",&p);

    printf("Enter The Rate : ");
    scanf("%f",&r);

    printf("Enter The Time : ");
    scanf("%f",&t);


    ci = p*pow((1+r/100),t);

    printf("The Compound interest: %.2f",ci);
}
