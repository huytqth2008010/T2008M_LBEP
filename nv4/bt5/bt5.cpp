//Nhap 1 so nguyên n, kiem tra n có phai so nguyên to
#include<stdio.h>

int main(){
	int n,s=0,i=2;
	
	printf("Nhap 1 so : ");
	scanf("%d", &n);
	
	if(n < 2){
		printf("\n%d khong phai so nguyen to", n);
		return 0;
	}
	
	for( ; i <= (n - 1); i++){
		if(n % i == 0){
			s++;
		}
	}

	if(s != 0){
		printf("\n%d khong phai la so nguyen to", n);
	}else{
		printf("\n%d la so nguyen to", n);
	}		
}
