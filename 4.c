#include<stdio.h>
int main(void)
{
	float cm,m;
	char name[40];

	printf("Please input your height.\n");
	scanf_s("%f", &cm);
	m=cm/100;
	printf("Please input your name.\n");
	scanf_s("%s", name, 40);
	printf("%s,you are %1.2f meters tall.", name, m);

	return 0;
}
