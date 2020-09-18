#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, p, C, s=0;
		do{
			printf("\nNhap canh thu nhat: ");
			scanf("%f", &a);
		
			printf("Nhap canh thu hai: ");
        	scanf("%f", &b);
        
			printf("Nhap canh thu ba: ");
			scanf("%f", &c);
			
			}while((a*a<=b*b+c*c)&&(b*b<=a*a+c*c)&&(c*c<=a*a+b*b));

		
		
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		C = p*2;
		
		printf("\nDien tich cua tam giac la %0.2f",s);
		printf("\nChu vi cua tam giac la %0.2f",C);
}
