#include<stdio.h>
#include<math.h>

float f(float x){
	float fx;
	
	fx = pow(x,7) + 5*pow(pow(x,5) + 3*pow(x,3) + 2, 1.0/3) + 12;
	
	return fx;
}
int main() {
	float a, b, c;
	
	printf("Nhap 3 gia tri: ");
	scanf("%f %f %f",&a, &b, &c);
	
	printf("Trung binh cong: %f", (f(a) + f(b) + f(c)) / 3 );
	
	return 0;
}

