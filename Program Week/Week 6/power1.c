#include <stdio.h>
 int power(int n1, int n2);
int main() {

    unsigned  int a, n, result;
    
    scanf("%d", &a);
    scanf("%d", &n);
    result = power(a, n);
    printf("%d",result);
    return 0;
}

 int power(int a, int n) {
    if (n != 0)
        return (a * power(a, n - 1));
    else
        return 1;
}
