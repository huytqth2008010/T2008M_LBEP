#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int d1=0;
	printf("\nNhap chuoi : ");
	scanf("%s",s);
	
	int n=strlen(s);
	
	for(int i=0;i<n;i++){
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='u')||(s[i]=='o')||(s[i]=='i')){ // Tim Nguyen Am
			d1++;
		}
	}
	printf("\nSo nguyen am la : %d",d1);
	printf("\nSo ky tu khac la : %d",n-d1); // Tim ky tu khac bang cach tru di d1,d3,d2
}
