//Q 1. Write a program to calculate simple interest.
#include<stdio.h>
#include<conio.h>

void main()
{
    float p,r,t,result;

    printf("Enter The Principal : ");
    scanf("%f",&p);

    printf("Enter The Rate : ");
    scanf("%f",&r);

    printf("Enter The Time : ");
    scanf("%f",&t);

    result = (p*r*t)/100;

    printf("The Simple Interest is : %.2f",result);
}
