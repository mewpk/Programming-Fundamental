#include <stdio.h>
unsigned long int sumMuti(int n , int m);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%lu",sumMuti( n ,  m));
    return 0 ;
}
unsigned long int sumMuti(int n , int m)
{
    if (m == n)
    {
        return m ;
    }
    else {
        return n * sumMuti(n+1,m);
    }
};