//1. Write a program to print unit digit of a given number.

#include<stdio.h>
int main()
{
   int n, R;
   printf("\nEnter a number: ");
   scanf("%d", &n);

   R=n%10;
   printf("\nThe unit digit of '%d' is '%d' ", n, R);
   return 0;
}