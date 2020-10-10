#include<stdio.h>
int main(void)
{
	float a;

	scanf("%f",&a);
	getchar();
	printf("The input is %1.2f or %1.2e.\n", a, a);
	
	getchar();
	return 0;
}
