#include <stdio.h>

float sqrt(int number)
{
    float temp = 0.00001; 
    float result = number;

    while ((result - number / result) > temp)
    {
        result = (result + number / result) / 2;
    }
    return result;
}

int main()
{
    printf("%.2f", sqrt(256));
    return 0;
}