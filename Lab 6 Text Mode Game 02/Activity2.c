#include <stdio.h> 

int swap(int *a,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}