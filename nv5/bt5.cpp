#include <stdio.h> 
  
int main() 
{ 
    int a, b, i, j, uoc; 
  	
  	do{
    printf("\nNhap a :  "); 
    scanf("%d", &a);
  
    printf("\nNhap b: "); 
    scanf("%d", &b);
    
	}while(a >= b);
    
    printf("\nCac so nguyen to trong khoang tu %d den %d la: \n", a, b); 
  
    for (i = a; i <= b; i++) { 
        if (i == 1 || i == 0) 
            continue; 
  
        uoc = 1; 
  		for (j = 2; j <= i / 2; ++j) { 
            if (i % j == 0) { 
                uoc = 0; 
                break; 
            } 
        } 
        if (uoc == 1) 
            printf("%4d ", i); 
    } 
}


