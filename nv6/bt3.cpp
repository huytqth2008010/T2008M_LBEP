#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap n : ");
	scanf("%d",&n);
	
	int mang[n];
	
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d : ",i);
		scanf("%d",&mang[i]);
	}
	
	printf("\nSo luong các so duong liên tiep nhieu nhat : ");
	
	int count=1;
	for(int i = 0;i<n;i++){
		for(int j = i + 1 ;j<n; j++){
			if(mang[j]==mang[i]+1){
				count++;
				i++;
				printf("%4d",count);
			}
		}
	}	

}

