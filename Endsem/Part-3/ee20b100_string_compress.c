// 3rd question of the assignment //

#include <stdio.h>

int main()

{

    int p, q, r ,x , y ,z , dotproduct ;
    
    
    printf("please enter vectA values p,q,r");

    scanf("%d %d %d ", &p, &q ,&r );

    printf("please enter vectB values x,y,z");

    scanf("%d %d %d", &x, &y , &z);

    dotproduct = (p*x)+(q*y)+(r*z);

    printf(" dot product of [p , q ,r ] and [x y z ] is %d,\n", dotproduct);

    return 0;


}