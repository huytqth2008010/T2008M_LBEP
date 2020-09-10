#include <stdio.h>
#include <math.h>

int main(){
	int n;
	
	printf("[+] CHAO MUNG THAY DA DEN VOI BAI TAP 1 CUA EM.\n"); 

	printf("\n[+] Nhap mot so tu ban phim : ");
	scanf("%d",&n);
	
	if(n>=2){
		if(n<=7){
			printf("[+] Day la thu : %d",n);
		}else{
		    if(n==8){
		    	printf("[+] Day la chu nhat");
		    }else{
		    	printf("[+] Day khong phai cac ngay trong tuan");
			}
		} 
	}else{
		printf("[+] Day khong phai cac ngay trong tuan"); 	
	}
}
