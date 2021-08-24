//(9)Write a program to input temperature in Fahrenheit and convert to Celsius.
#include<stdio.h>
#include<conio.h>

void main()
{
    int f;
    float c;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d",&f);

    c =((f-32)*1.8);

    printf("The Temperature in Celsius is : %.2f",c);
}
