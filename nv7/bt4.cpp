#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mang[n];
	//nhap vao mang
	for(int i=0; i<n; i++){
		int a;
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d", &a);
		mang[i]=a; //gan luon
		
		int j=i-1; 
		int x=mang[i]; 
		while(j>=0 && x<mang[j]){
			mang[j+1]=mang[j];
			j--;
		}
		mang[j+1]=x;
	}
	printf("Mang sau khi sap xep la:\n");
	for(int i=0; i<n; i++){
		printf("%54",mang[i]);
	}
}
