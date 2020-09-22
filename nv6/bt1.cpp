#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap n : ");
	scanf("%d",&n);
	
	int mang [n],gtle;
	
	for(int i = 0; i<n; i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&mang [i]);
	}
	printf("Gia tri le cuoi cung : ");
	
	for(int i=0;i<n;i++){
		if(mang[i]%2!=0){
			gtle=mang[i];
		}
	}
		printf("%d",gtle);
}

