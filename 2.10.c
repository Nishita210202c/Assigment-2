//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>
int main()
{
    int n, r, a;

    printf("Enter a number: ");
    scanf("%d",&n);

    r=n/10;
    a=r*10;

    printf("result is : %d", a);
}