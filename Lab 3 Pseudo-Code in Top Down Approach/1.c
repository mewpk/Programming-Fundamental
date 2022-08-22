#include <stdio.h>

int main()
{
    int number, mod, y = 0;
    printf("number :");
    scanf("%d", &number);

    printf("%d -> ", number);

    while (1)
    {
        if (number > 0)
        {

            mod = number % 10;
            // printf("%d",mod);
            y += mod;
            number = number / 10;
        }
        else
        {
            if (y >= 10)
            {
                printf("%d -> ", y);
                number = y;
                y = 0;
            }
            else
            {

                printf("%d", y);
                break;
            }
        }
    }

    return 0;
}