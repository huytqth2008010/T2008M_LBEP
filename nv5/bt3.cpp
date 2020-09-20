#include<stdio.h>

int main(){
	int a,b;
	
	do{
		printf("Nhap a = ");
		scanf("%d",&a);
		printf("Nhap b = ");
		scanf("%d",&b);
	}while (a<=0|| b<=0);
	
	while(a!=b){
		if(a>b)
			a = a - b;
		else
 			b = b - a;
	}
		printf("\nUoc chung lon nhat la %d",a);
}
