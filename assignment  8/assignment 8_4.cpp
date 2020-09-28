#include <stdio.h>
#include <math.h>
//mang con 
//tinh dien tich
float dientich(int a, int b, int c){
	float p,s=0;
	p = (a+b+c)/2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	return p;
}
int main(){
	//nhap cac phan tu
	float a,b,c;
		printf("\nNhap canh thu nhat: ");
		scanf("%f", &a);
		printf("Nhap canh thu hai: ");
		scanf("%f", &b);
		printf("Nhap canh thu ba: ");
		scanf("%f", &c);
	//in ra kq tinh dien tich
	printf("\nDien tich cua tam giac la : %0.2f ",dientich(a,b,c));
	return 0;
}


 
