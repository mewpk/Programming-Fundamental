#include <stdio.h>

int isPrime(int n)
{
    int i, flag = 0;

    if (n == 0 || n == 1)
        flag = 1;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
        return 1;
    else
        return 0;
}
int main()
{

    int number;
    scanf("%d", &number);
    if (isPrime(number) == 1)
   {
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}