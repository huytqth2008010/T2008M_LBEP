#include <stdio.h>

int main(){
	int n;
	float i=1;
	float s=0;
	
//	printf("Nhap n:");
//	scanf("%d",&n);
	
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}while ( n<= 0);
	
	for( ;i<=n;i++){
		s+= 1/i;
	}
		printf("\nS = %f",s);
}

