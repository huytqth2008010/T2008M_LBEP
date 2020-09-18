#include <stdio.h>

int main(){
	int n,i=1,s=0;
	
	do{
		printf("Nhap n > 0 :");
		scanf("%d",&n);
	}while ( n<= 0);
	
	for( ;i<=n;i++){
		s+=i;
	}
		printf("\nS = %d",s);
}

