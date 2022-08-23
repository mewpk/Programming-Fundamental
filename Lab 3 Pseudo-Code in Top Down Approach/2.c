#include <stdio.h>


int main()
{
    int px, x = 0;
    printf("P(x) :");
    scanf("%d", &px);

    printf("P(%d) = ", px);
    for (int i = 1; i <= 10000; i++)
    {
        if (px == x || px == i)
        {
            break;
        }
        else if (px % i == 0)
        {
            if (i == 1)
            {

                printf("%d ", i);
                x += i;
            }
            else
            {

                printf("+ %d ", i);
                x += i;
            }
        }
    }

    return 0;
}