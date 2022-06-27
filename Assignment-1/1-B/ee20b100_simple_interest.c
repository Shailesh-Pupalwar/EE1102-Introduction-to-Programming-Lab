#include <stdio.h>

int main()
{
	int p,  t;
	float m,r,i;
	printf("Enter the required details:\n");
	printf("Principal (Rs): ");
	scanf("%d", &p);
	printf("Rate of interest % ");
	scanf("%f", &r);
	printf("Number of days: ");
	scanf("%d", &t);
	i = (p * r * t ) / (365 * 100);
	printf("%f ",i);
	m=p+i;
	printf("Maturity amount is Rs. %f\n", m);
	return 0;
}