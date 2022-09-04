#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 2) + fibo(n - 1);
    }
}

int main()
{
    int n, answer;
    printf("Enter n :");
    scanf("%d", &n);
    answer = fibo(n);
    printf("%d", answer);
}