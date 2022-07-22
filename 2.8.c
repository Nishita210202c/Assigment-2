//8. Write a program to check whether the given number is even or odd using a bitwise
//operator.

#include<Stdio.h>
int main()
{
    int n;
    printf("ENter a number: ");
    scanf("%d", &n);

    if(n & 1 ==1)
    {
        printf("The number is odd");
    }
    else
    {
    printf("The given number is even");
    }
}