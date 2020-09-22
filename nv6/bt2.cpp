#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap n : ");
	scanf("%d",&n);
	
	int mang[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i);
		scanf("%d",&mang[i]);
	}
	
	int a;
	for(int i = 0; i < n;i++){
		if(mang[i]>0){
			a = mang[i];
		}
	}
	for(int i = 0;i < n;i++){
		if(mang[i]>0 && mang[i] < a){
			a = mang[i];
		}
	}
	printf("\nSo duong nho nhat : %d",a);
}


