#include <stdio.h>

int SNT(int n,int s = 0){
	if(n < 2)
		return false;
	for(int i = 2; i <= (n - 1); i++){
		if(n % i == 0){
			return false;
		}
		return true;
	}
		
}

int main(){
	int n;
	printf("Nhap 1 so : ");
	scanf("%d",&n);
	
	if(SNT(n)){
		printf("\n%d la so nguyen to",n);
	}else{
		printf("\n%d khong la so nguyen to",n);
	}
}

