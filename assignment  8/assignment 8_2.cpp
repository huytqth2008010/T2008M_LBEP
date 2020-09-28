#include<stdio.h>

int Tong(int n){
	int m;
	int s=0;
	for(;n!=0;){
		m = n % 10;
		s += m;
		n /= 10;
	}	
	return s;
}
int main(){
	// nhap n
	int n;
	printf("Nhap n (vd 123...): ");
	scanf("%d",&n);
	// Tong cac chu so cua 1 so nguyen n
	printf("Tong cac chu so : %d",Tong(n));
	return 0;
}

