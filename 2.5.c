//5. Write a program to input a three-digit number and display the sum of the digits.

#include<Stdio.h>
int main()
{
    int n, a, b, c, d, sum=0;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    sum=a+c+d;

    printf("The sum is: %d", sum);
  return 0;
}