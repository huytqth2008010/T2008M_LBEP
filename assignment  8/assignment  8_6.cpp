#include <stdio.h>
//mang con
int bcnn(int a, int b){
	int lcm = 0,max,step;
	if(a > b)
      max = step = a;
   else
      max = step = b;
   while(1) {
      if(max%a == 0 && max%b == 0) {
         lcm = max;
         break;    
      }
      max += step;
   }
}
int main(){
	int a,b;
	printf("Nhap a > 0 : ");
	scanf("%d",&a);
	printf("Nhap b > 0 : ");
	scanf("%d",&b);
	//in ra ket qua
	printf("\nBCNN cua %d va %d la : %d",a,b,bcnn(a,b));
}

