/*Q 7. Write a program to input two
numbers and perform
all arithmetic operation
(addition, subtraction,
 multiplication, division and modulus)*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    int add,sub,mul,modu,div;

    printf("Enter the 1st number : ");
    scanf("%d",&a);

    printf("Enter the 2nd number : ");
    scanf("%d",&b);

    add = a+b;
    sub = a-b;
    mul = a*b;
    modu = a%b;
    div = a/b;

    printf("The addition of %d and %d is : %d\n",a,b,add);
    printf("The subtraction of %d and %d is : %d\n",a,b,sub);
    printf("The multiplication of %d and %d is : %d\n",a,b,mul);
    printf("The modulus of %d and %d is : %d\n",a,b,modu);
    printf("The Division of %d and %d is : %d\n",a,b,div);

}
