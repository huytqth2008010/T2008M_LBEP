#include<stdio.h>
#include<conio.h>

int main(){
	
    int i=1, n, S=0;
    
    printf("Nhap n : ");
    scanf("%d", &n);

	for( ;i <= n;i++){
		if(n % i == 0){
			printf("%4d",i);
			S=S +1;
		}
	}
	printf("\nTong cac uoc cua %d la: %ld", n, S);
}
