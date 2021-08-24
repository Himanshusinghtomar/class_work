//Q 4. Write a program to calculate area of triangle.
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int s1,s2,s3,s,area,c;
    int b,h;
    char choice;

    printf("Enter A for calculate by side: \nEnter B for calculate by base and height: ");
    scanf("%c",&choice);

    if(choice == 'B'|| choice == 'b')
    {
        printf("Enter the height: ");
        scanf("%d",&h);

        printf("Enter the base: ");
        scanf("%d",&b);

        area = b*h/2;

        printf("The Area of triangle: %d",area);
    }
    else if(choice == 'A'|| choice == 'a')
    {
        printf("Enter 1st Side: ");
        scanf("%d",&s1);

        printf("Enter 2nd Side: ");
        scanf("%d",&s2);

        printf("Enter 3rd Side: ");
        scanf("%d",&s3);

        s = s1+s2+s3/2;

        c = sqrt(s*(s-s1)*(s-s2)*(s-s3));

        printf("The Area of triangle: %d",c);
    }
}
