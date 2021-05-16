#include<stdio.h>

const float pi = 3.14;
int main() {
	float r, s, c;
	printf("Nhap ban kinh: "); scanf("%f", &r);
	printf("Dien tich hinh tron: %f", pi*r*r);
	printf("\nChu vi hinh tron: %f", 2*pi*r);
	return 0;
}

