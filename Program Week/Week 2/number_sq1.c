#include <stdio.h>

int main()
{
    int number;

    printf("Type Ur Number :");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++)
    {
        int x = 0;
        for (int j = 0; j <= number; j++)
        {

            printf("%d", x);
            if (x < i)
            {
                x++;
            }
        }
        x = i;
        for (int k = number; k >= 1; k--)
        {

            if (x >= k)
            {
                x--;
            }
            printf("%d", x);
        }
        printf("\n");
    }
    int y = number - 1;
    int z = number - 1;
    for (int i = 0; i <= number - 1; i++)
    {
        int x = 0;

        for (int j = 0; j <= number; j++)
        {

            printf("%d", x);
            if (x < y)
            {
                x++;
            }
        }
        y--;
        x = z;
        for (int k = number; k >= 1; k--)
        {

            if (x >= k)
            {
                x--;
            }
            printf("%d", x);
        }
        z--;
        printf("\n");
    }

    return 0;
}