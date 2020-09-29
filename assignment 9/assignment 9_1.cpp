#include<stdio.h>
#include<string.h>
main(){
	char s[100];
	int d1=0,d2=0,d3=0;
	printf("\nNhap chuoi : ");
	gets(s);
	
	int n=strlen(s);
	
	for(int i=0;i<n;i++){
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='u')||(s[i]=='o')||(s[i]=='i')){ // Tim Nguyen Am
			d1++;
// 		}if(s[i]>='0'&&s[i]<='9'){  //Tim Ky Tu So
// 			d2++;
// 		}if((s[i]!='a')&&(s[i]!='e')&&(s[i]!='u')&&(s[i]!='o')&&(s[i]!='i')&&(s[i]>'a')&&(s[i]<'z')){ // Tim Phu Am
// 			d3++;
		}
	}
	printf("\nSo nguyen am la : %d",d1);
//	printf("\nSo phu am la : %d",d3);
//	printf("\nSo ky tu so la : %d",d2);
	printf("\nSo ky tu khac la : %d",n-d1); // Tim ky tu khac bang cach tru di d1,d3,d2
}
