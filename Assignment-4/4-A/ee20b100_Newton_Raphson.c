#include <stdio.h>

int main()

{
    float N;
    
    printf("Please enter the number: ");
    scanf("%f", &N);
    
    float x_n;
    float x_np1; 
    float error = 1;
    float tol = 0.00001;
    
    x_n=N;
    
    while( error > tol)
    {
        
        x_np1 = (1.0/3.0)*(2*(x_n)+(N/(x_n*x_n)));
        
        x_n = x_np1;
        
        error = (x_n*x_n*x_n - N);
        
        if(error <0)
        {
            error = -error;   
        } 
        
    }
    
    printf(" the root of the equation : %f \n", x_n );
    
    return 0;

}
