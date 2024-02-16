#include<stdio.h>

void calc(){
	int a,b;
	
	printf("Enter the number: ");
	scanf("%d" ,&a);
	
	printf("Enter the number: ");
	scanf("%d" ,&b);
	
     printf("\n Sum of %d + %d = %d" ,a ,b ,a + b);
  	 printf("\n Sub of %d - %d = %d" ,a ,b ,a - b);
     printf("\n Multiply of %d * %d = %d" ,a ,b ,a * b);
  	 printf("\n Division of %d / %d = %d" ,a ,b ,a / b);
}

void main(){
	
	calc();
}
