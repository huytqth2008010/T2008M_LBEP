#include <stdio.h>
//mang con
int ucln(int a, int b){
	if(a>b){
		a = a - b;
		return a;
	}else{
		b = b - a;
			return b;
	}
}
int main(){
	int a,b;
	printf("Nhap a > 0 : ");
	scanf("%d",&a);
	printf("Nhap b > 0 : ");
	scanf("%d",&b);
	//in ra ket qua
	printf("UCLN cua %d va %d la : %d",a,b,ucln(a,b));
}
