
//b�i 3: T�nh tong 100 so le > 0 dau ti�n
#include <stdio.h>

int main(){
	int s=0,i=0;
	
	for( ;i < 200;i++){
		if(i % 2 != 0){
			s+=i;
		}
	}
	printf("Tong 100 so le > 0 dau ti�n : %d",s);
}

