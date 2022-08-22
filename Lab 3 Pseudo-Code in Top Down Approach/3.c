#include <stdio.h>

int main()
{
    int number;
    printf("Number :");
    scanf("%d", &number);

    for (int i = 1; i <= 2 * number - 1; i++)
    {
        for (int j = 1; j <= 2 * number - 1; j++)
        {
            if (j > i && j <= 2 * number - 1 - i)
            {

                printf("  ");
            }
            else
            {
                if (i > number && j <= i - 1)
                {   
                    if (j <= 2*number - i)
                    {
                        
                    printf("* ");
                    }
                    else{
                        
                    printf("  ");
                    }
                    
                }
                else
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}