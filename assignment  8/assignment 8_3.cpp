#include <stdio.h>
#include <math.h>

float chuvi(int a, int b, int c){
	return a + b + c;
}
int main(){
	float a,b,c;
	do{
	printf("\nNhap canh thu nhat: ");
	scanf("%f", &a);

	printf("Nhap canh thu hai: ");
	scanf("%f", &b);

	printf("Nhap canh thu ba: ");
	scanf("%f", &c);
	
	}while((a+b>c)&&(a+c>b)&&(b+c>a));
		printf("\nChu vi cua tam giac la : %0.2f ",chuvi(a,b,c));
	return 0;
}

