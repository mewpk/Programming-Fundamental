#include <stdio.h>

int main()
{
    int m, n, sum,l;
    scanf("%d %d", &m, &n);
    l = (n-m)+1;
    sum = (l/2)*(n+m);
    printf("%d", sum);

    return 0;
}