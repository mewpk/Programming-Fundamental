#include <stdio.h>

long factorial(int);

int main()
{
    int number ;
    scanf("%d",&number);
    printf("%d" ,factorial(number));

    return 0;
}

long factorial(int n)
{
    if (n == 0){
        return 1;
    }else{
        return(n * factorial(n-1));
    }
}