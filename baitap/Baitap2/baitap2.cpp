#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, d, x1, x2, x;
	printf("Nhap vao cac he so phuong trinh bac hai => a =, b =, c = : ");
	scanf("%f%f%f", &a, &b ,&c);
	
	if (a == 0){ // phuong trinh bac 1
		if(b == 0 && c != 0){
			printf("Phuong trinh vo nghiem\n");
		} else if(b == 0 && c == 0 ){
			printf("Phuong trinh vo so nghiem\n");
		} else {
			x = -c / b;
			printf("Ngiem cua phuong trinh = %0.2f", x);
		}
	} else { // phuong trinh bac 2
		d = b * b - 4 * a * c;
		if(d < 0){
			printf("Phuong trinh vo nghiem");
		}else if(d == 0){
			x1 = -b/(2 * a);
			printf("Phuong trinh co nghiem kep X = %0.2f", x1);
		}else{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("Nghiem cua phuong trinh la :\nx1 = %0.2f\nx2 = %0.2f", x1, x2);
		}
	}
	return 0;
}
