//pgm_no:02
//prime number approch 2
// (num/2) iterations
#include<stdio.h>
#include<conio.h>
#define pf  printf
#define sf  scanf
int main()
{
      int i, num = 101;

    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == (num/2)+1)
    {
        printf("%d is a prime number ", num);
    }
    else
    {
        printf("%d is NOT a prime number ", num);
    }

return 0;
}