#include<stdio.h>
int main(void)
{
	float rate, size, time;

	printf("Please input download rate.(Mb/s)\n");
	scanf_s("%f",&rate);
	printf("Please input the file size.(MB)\n");
	scanf_s("%f",&size);
	time = size * 8 / rate;
	printf("download rate:%.2f,file size:%.2f,download time:%.2f",rate,size,time);

	return 0;
}
