#include<stdio.h>


int sum(){
	
	int num,i, sum = 0;
	
	printf("Enter Your Number : ");
	scanf("%d", &num);
	
	int a[i];
	
	for(i = 0; i < num; i++){
		printf("arr[%d] : ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < num; i++){
		printf("Your Array Value : %d  \n", a[i]);
		sum = sum + a[i];		
	}
	
	printf("The sum of an Array : %d \n ",sum);
	
}
void main(){
	
	sum();
	
}
