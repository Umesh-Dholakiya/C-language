#include<stdio.h>


int length(){
	
	int i, length = 0 ;
	char num[100];

	printf("Enter any string : ");
	scanf("%s", &num);

	for(i = 0; num[i] != NULL; i++){
		length++;	
	}

	printf("\n => Length of : %d \n", length);
}

void main(){
	
	length();
	
}
