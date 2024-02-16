#include<stdio.h>

main(){
	
	int len , i, upr = 0 , lwr = 0 , num = 0 , sym = 0;
	char pwd[10];
	
	printf("Enter Your Password : ");
	gets(pwd);
	
	len = len + pwd[10];
	
	for(i = 0; i <= len; i++){
		
		if(pwd[i] >= 65 && pwd[i] <= 90) upr++;
		if( pwd[i] >= 97 && pwd[i] <= 122 ) lwr++;
		if( pwd[i] >= 48 && pwd[i] <= 57 ) num++;
		if( pwd[i] == '@' || pwd[i] == '#' || pwd[i] == '$') sym++;
	} 
	
	if(upr > 0 && lwr > 0 && num > 0 && sym > 0){
		printf("\nYour Password is Strong");
	}
	else{
		printf("\nYour Password is Weak");
	}
}
