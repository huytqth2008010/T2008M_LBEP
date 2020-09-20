#include <stdio.h>

int main() {
	int n,i;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	
	for (i = 1; i <= (n - 2); i++)
	{
		if(i % 2 == 0) 
		{
		  printf("%4d",i);
		}
	}
}
