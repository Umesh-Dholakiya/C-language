#include<stdio.h>

main(){
	
	
	int i, length = 0 , a;
	char choice[100];
	
	printf("Enter Your Choice : ");
	scanf("%s", &choice);
	
	for(i = 0; choice[i] != NULL; i++){
		length++;	
	}
	
	printf("Length of %d \n", length);
	
	
	for(i = 0; choice[i] > length; i++){
		if(choice[i] == choice[length - i - 1]){
			a = 1;
		}
		else{
			a = 0;
		}
	}
	
	if(a == 1){
		printf("\n Given string is a Palindrome.");
	}
	else{
		printf("\n Given string is not a Palindrome.");
	}
}
