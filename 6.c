#include<stdio.h>
#include<string.h>
int main(void)
{
	char fname[40], lname[40];
	int a, b;
	printf("Input your first name:");
	scanf_s("%s", fname,40);
	printf("Input your last name:");
	scanf_s("%s", lname,40);
	a = strlen(fname);
	b = strlen(lname);
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", a, a, b, b);
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", a, a, b, b);

	return 0;
}
