//Q 3. Write a program to calculate volume and surface area of sphere.
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define  pi 3.14

void main()
{
    int radius,v,sa;

    printf("Enter the radius: ");
    scanf("%d",&radius);

    v = 4/3*pi*radius*radius*radius;

    sa = 4*pi*radius*radius;

    printf("The Volume of Sphere is %d\n",v);

    printf("The Surface area of Sphere is %d",sa);

}
