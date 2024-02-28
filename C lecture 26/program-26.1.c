#include<stdio.h>

main(){
	
	int length,*p;
	char num[40];
	
	printf("Enter any string : ");
   
	gets(num);
	
	length = strlen(num);
	p = &length;
	
	printf("\n Length of string : %d",*p);	
}
