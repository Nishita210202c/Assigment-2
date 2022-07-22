//9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    int a;

    a=sizeof(int);
    printf("\nSize int of is %d\n", a);

    a=sizeof(float);
    printf("Size of float is %d\n", a);

    a=sizeof(char);
    printf("Size of char is %d\n", a);

    a=sizeof(double);
    printf("Size of double is %d\n\n", a);
    
}