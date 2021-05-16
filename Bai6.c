#include<stdio.h>
#include<math.h>

float Str(float c){
	return c*c / 4 / 3.1416;
}

float Sv(float c){
	return c*c / 16;
}

float Stgd(float c){
	return c*c / 12 / sqrt(3);
}
int main() {
	float c;
	printf("Nhap chu vi: "); 
	scanf("%f", &c);
	
	printf("Dien tich hinh tron: %f", Str(c));
	printf("\nDien tich hinh vuong: %f", Sv(c));
	printf("\nDien tich tam giac deu: %f",Stgd(c));
	return 0;
}

