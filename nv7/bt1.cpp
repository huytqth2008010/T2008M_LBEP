//ma tran chuyen vi
#include <stdio.h>

int main(){
	int mang[2][3];
	
	for(int i = 0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("mang[%d][%d] = ",i,j);
			scanf("%d",&mang[i][j]);
		}  
	}
	
	printf("\nMa tran A : \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%4d",mang[i][j]);
		}printf("\n");
	}
	printf("Ma tran B : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("%4d",mang[j][i]);
		}printf("\n");
	}	
}
