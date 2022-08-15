#include <stdio.h>

int main()
{
    int answer, x, y;
    printf("Enter first number :");
    scanf("%d", &x);
    printf("Enter second number :");
    scanf("%d", &y);
    while (x != y)
    {
        if (x > y){
            x -= y;
        }
        else{
            y -= x;
        }
    }
    answer = x;
    printf("%d", answer);
    return 0;
}
