#include <stdio.h>

int main()
{   
    int sum = 0;
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 1; j < i; j++)
        {   
            if (sum > i)
            {
                break;
            }
            
            if (i % j == 0 )
            {
                sum += j;
            }
            
        }
        if (i == 1){
            
            printf("P(1) = 1 \n");
        }
        
        if (sum == i  )
        {
            printf("P(%d) = %d \n",i,sum);
            sum = 0;
        }
        else{
            sum = 0;
        }
        
        
    }
    
    return 0;
}