#include<stdio.h>
#define km 1.609
#define l 3.785
int main(void)
{
	float gallon, mile,a,b;
	printf("Input gallon and miles.\n");
	scanf_s("%f", &gallon);
	scanf_s("%f", &mile);
	a = mile / gallon;
	printf("%.1f miles/gallon.\n", a);
	b = 1 / (100 * (mile * km) / (gallon * l));
	printf("%.1f liter/100 kilometers.\n");

	return 0;
}
