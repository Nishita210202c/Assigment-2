//3. Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("\nEnter two numbers a, b: ");
    scanf("%d %d", &a, &b);

    printf("\nThe numbers before swaping are a=%d b=%d", a, b);
    temp=a;
    a=b;
    b=temp;

    printf("\nThe numbers after swaping are a=%d b=%d\n", a, b);

    
}