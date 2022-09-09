#include <stdio.h>

int main(){
    unsigned long int n,m,sum = 1;
    scanf("%lu",&n);
    scanf("%lu",&m);
    for (size_t i = 1; i <= m; i++)
    {
        sum *= i;
    }
    printf("%d",sum);
    

}