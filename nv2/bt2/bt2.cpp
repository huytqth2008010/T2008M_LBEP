#include <stdio.h>
#include <math.h>

 int main(){
 	
 	int a,b,x1,x2;
 	
	printf("[+] CHAO MUNG THAY DA DEN VOI BAI TAP THU 2 CUA EM.\n"); 
	
	printf("[+] Baitap 2 : Nhap vao 2 so nguyen a va b . Hoi neu a >= b thi a/b va nguoc lai\n");
												  
 	
	printf("\n[+] Nhap a = ");
 	scanf("%d",&a);
 	
 	printf("[+] Nhap b = ");
 	scanf("%d",&b);
 	
 	if(a>=b){
 		
		x1= a/b;
		printf("\n[+] Ket qua x1 = a/b : %d",x1);
 		
		 }else{
		 	
	 	x2= a*b;
	 	printf("[+] Ket qua x2 = a*b : %d",x2);
	 }
 } 
