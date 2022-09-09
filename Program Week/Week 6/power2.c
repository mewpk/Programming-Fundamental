#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int a, n, result;
    scanf("%d", &a);
    scanf("%d",&n);

    result = pow(a,n);
    printf("%d", result);

    return 0;
}