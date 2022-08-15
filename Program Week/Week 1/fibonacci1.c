#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{   
    int answer,n;
    printf("Enter n :");
    scanf("%d",&n);
    double phi;
    phi = 1.618034;
    answer = ((pow(phi,n)-pow(1-phi,n))/sqrt(5));
    printf("%d",answer) ;
}