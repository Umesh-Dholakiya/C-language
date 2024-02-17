#include<stdio.h>

main(){
	
	char str[50];
	int length = 0 , i , j, n[50] = {0};
	
	printf("Enter Your Name : ");
	scanf("%s", &str);
	
	length = strlen(str);
	
	printf("\nLength of %d \n\n", length);
	
	
	for( i = 0; i < length; i++){
		for(j = 0; j < length; j++){
			if(str[i] == str[j]){
				n[i] ++;
			}
		}
	}
	
	for(i = 0; i < length; i++){
		if(n[i] != 0){
			printf("%c => %d \n", str[i],n[i]); 
			n[i] ++;
		}

	}
	
}
