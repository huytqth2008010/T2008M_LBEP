#include <stdio.h>

int main() {
	int n,uoc;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	
	for (int i=2; i<=n; i++)
	{
		uoc = 0;
		for(int j=2; j<=i; j++){
			if(i % j  == 0)
			uoc++;			
		}
		if(uoc == 1)
		printf("%4d",i);
	}	
}
