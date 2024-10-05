// Title : program to check the given number is prime or not
#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
int main()
{
    int i, num = 7;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == num)
    {
        printf("%d is a prime number ", num);
    }
    else
    {
        printf("%d is NOT a prime number ", num);
    }
    return 0;
}