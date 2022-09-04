#include <stdio.h>

int main(){
    int number,answer = 1;
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        answer *= i;
    }
    printf("%d",answer);
    
    return 0 ;
}