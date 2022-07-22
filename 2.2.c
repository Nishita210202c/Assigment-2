// 2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
   int n, Ans;
   printf("\nEnter a number: ");
   scanf("%d", &n);

   Ans=n/10;
   printf("The given number without the last digit is '%d'\n ",  Ans );
   return 0;
}