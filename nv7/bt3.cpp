#include <stdio.h>
int main (){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	
	int a[n],x;
	//Nhap vao mang
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i);
		scanf("%d",&x);
		//Neu a[i] la gia tri dau tien
		if(i==0)
			//gan luon
			a[i]=x;
		//Neu khong phai gia tri dau tien
		else{
			for(int j=0;j<i;j++){
				//Neu da trung
				if(x == a[j]){
					//Thong bao da trung, yeu cau nhap lai
					printf("Da trung.Nhap lai !\n");
					i=i-1; //Nhap lai gia tri do
				}
				//Neu khong trung
				else{
					a[i]=x; //Gan phan tu nhu binh thuong
				}
			}
		}
	}
}
