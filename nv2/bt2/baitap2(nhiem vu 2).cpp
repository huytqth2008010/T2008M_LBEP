#include <stdio.h>
#include <math.h>

 int main(){
 	
 	float a,b,x1,x2;
 	
	printf("[+] CHAO MUNG THAY DA DEN VOI BAI TAP THU 2 CUA EM.\n"); 
	
	printf("[+] Baitap 2 : Nhap vao 2 so nguyen a va b . Hoi neu a >= b thi a/b va nguoc lai\n");
												  
 	
	printf("\n[+] Nhap a = ");
 	scanf("%f",&a);
 	
 	printf("[+] Nhap b = ");
 	scanf("%f",&b);
 	
 	if(a>=b){
 		if(b!=0){
			x1= a/b;
		printf("\n[+] Ket qua a/b = %0.2f",x1);		
			}else{
			printf("\n[+] Khong the thuc hien phep tinh.");
		}
		}else{
		 	
	 	x2= a*b;
	 	printf("[+] Ket qua a*b = %0.2f",x2);
	 }
 } 
