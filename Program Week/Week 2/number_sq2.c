#include <stdio.h>

int main()
{
    int number;

    printf("Type Ur Number :");
    scanf("%d", &number);
    int i = 0;
    while (i <= number)
    {

        int x = 0;
        int j = 0;

        while (j <= number)
        {
            printf("%d", x);
            if (x < i)
            {
                x++;
            }
            j++;
        }

        x = i;
        int k = number;

        while (k >= 1)
        {

            if (x >= k)
            {
                x--;
            }
            printf("%d", x);
            k--;
        }
        printf("\n");
        i++;
    }

    int y = number - 1;
    int z = number - 1;

    i = 0;
    while (i <= number - 1)
    {
        int x = 0;
        int j = 0;
        while (j <= number)
        {

            printf("%d", x);
            if (x < y)
            {
                x++;
            }
            j++;
        }
        y--;
        x = z;
        int k = number;
        while (k >= 1)
        {

            if (x >= k)
            {
                x--;
            }
            printf("%d", x);
            k--;
        }
        z--;
        printf("\n");
        i++;
    }

    return 0;
}