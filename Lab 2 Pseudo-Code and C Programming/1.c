#include <stdio.h>

int main()
{
    int number, answer, op = 2;
    printf("Enter number :");
    scanf("%d", &number);
    answer = number;

    while (answer > 1)
    {
        if (number % op == 0)
        {
            number /= op;
            answer = number;
            printf("%d", op);
            if (answer != 1)
            {
                printf(" x ");
            }
        }
        else
        {
            op += 1;
        }
    }

    return 0;
}