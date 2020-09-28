#include <stdio.h>
			//chuong trinh con
			//ktra so nguyen to
int KiemTraSNT(int n,int s = 0){
	if(n < 2)
		return false;
	for(int i = 2; i <= (n - 1); i++){
		if(n % i == 0){
			s++;
			return false;
		}
		return true;
	}		
}
			//tim so nguyen to lon hon n và gan n nhat
void TimSNT(int n){
	int i = n+1;
	while(KiemTraSNT(i)== false){
		i++;
	}
	printf("%d",i);
}
			//hàm main
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
			// tim so nguyen to lon hon n và gan n nhat
		printf("Xuat so nguyen to lon hon n va gan n nhat : ");
	TimSNT(n);
	return 0;
}

