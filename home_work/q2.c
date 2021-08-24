//Q 2: Write a program to calculate area and circumference of circle.
#include<stdio.h>
#include<conio.h>

#define pi 3.14

void main()
{
    int radius,area,cir;

    printf("Enter the Radius: ");
    scanf("%d",&radius);

    area = pi*radius*radius;

    cir = 2*pi*radius;

    printf("The Area of %d\n",area);
    printf("The Circumference of %d",cir);

}
