#include<stdio.h>

int calc(){
	int a,b;
	
	 printf("Enter the First number: ");
	 scanf("%d" ,&a);
	
   	 printf("Enter the Second number: ");
	 scanf("%d" ,&b);
	
     printf("\n => Sum of %d + %d = %d \n" ,a ,b ,a + b);
     
  	 printf("\n => Sub of %d - %d = %d \n" ,a ,b ,a - b);
     
	 printf("\n => Multiply of %d * %d = %d \n" ,a ,b ,a * b);
  	 
	 printf("\n => Division of %d / %d = %d \n" ,a ,b ,a / b);
  	
	 printf("\n => Modules of %d %% %d = %d \n" ,a ,b ,a % b);
}

void main(){
	
	calc();
}
