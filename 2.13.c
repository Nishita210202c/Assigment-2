//13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>
int main()
{
    int n, result, q, r;

    printf("Enter a Number: ");
    scanf("%d", &n);

    r=n%10;
    q=r*100;
    result=n/10+q;

    printf("The rotated number is: %d", result);    

}
