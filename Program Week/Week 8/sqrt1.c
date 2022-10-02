#include <stdio.h>

float sqrt(int number)
{
    float result, temp;
    result = number / 2;
    temp = 0;
    while (result != temp)
    {
        temp = result;

        result = (number / temp + temp) / 2;
    }

    return result;
}

int main()
{

    printf("%.2f", sqrt(256));

    return 0;
}