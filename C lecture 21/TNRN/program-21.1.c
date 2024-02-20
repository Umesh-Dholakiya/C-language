#include<stdio.h>

void EvenOdd(int num){
	

	if(num % 2 == 0){
		printf("Your given number is Even");
		
	}
	else{
		printf("Your given number is Odd");
	}
}

void main(){
	
	int a;
	
	printf("Enter the Number: ");
	scanf("%d",&a);
	
	EvenOdd(a);
}
