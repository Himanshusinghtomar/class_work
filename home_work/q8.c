//(8)	Write a program to input temperature in Celsius and convert to Fahrenheit
#include<stdio.h>
#include<conio.h>

void main()
{
    int c;
    float f;

    printf("Enter the temperature in Celsius: ");
    scanf("%d",&c);

    f = ((c*1.8)+32);

    printf("The Temperature in Fahrenheit is : %.2f ",f);
}
