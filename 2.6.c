//6. Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
int main()
{
 char a;
 
 printf("\nEnter a char: ");
 scanf("%c", &a);

 printf("\nThe ASCII value of %c = %d\n", a, a);
 
}