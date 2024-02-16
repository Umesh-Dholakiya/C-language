#include<stdio.h>


 main() {
	
    int length, j, a = 0;
    char u[25];

    printf("\n\n**************  SIGN UP ***************\n\n");
    
    // Email-Id :- 
    
    printf("Enter your Email address : ");
    gets(u);

    length = strlen(u);

    for (j = 0; j <= length; j++) {
        if (u[j] == '@') {
            if (strcmp(&u[j], "@gmail.com") == 0)
                a = 1;
        }
    }

    if (a > 0 && length > 12) {
        printf(" => Valid email address.\n");
    } 
	else {
        printf(" => Invalid email address.\n");
    }

    // Password :- 
    
    int len, i, upr = 0, lwr = 0, num = 0, sym = 0;
    char pwd[20];

    printf("\n\n Enter your Password : ");
    gets(pwd);

    len = strlen(pwd);

    for (i = 0; i < len; i++) {
    	
        if (pwd[i] >= 65 && pwd[i] <= 90) upr++;
        if (pwd[i] >= 97 && pwd[i] <= 122) lwr++;
        if (pwd[i] >= 48 && pwd[i] <= 57) num++;
        if (pwd[i] >= 33 && pwd[i] <= 47 || pwd[i] == '@') sym++;
    }

    if (upr > 0 && lwr > 0 && num > 0 && sym > 0) {	
        printf(" => Your password is strong\n");
    }
	 else {
        printf(" => Your password is weak\n");
    }
    

    char email[25], pas[20];

    if (a > 0 && length > 12 && upr > 0 && lwr > 0 && num > 0 && sym > 0) {
    	
        printf("\n\n *************** LOGIN  **************\n\n");
        
        printf("Enter your Email address : ");
        gets(email);

        if (strcmp(email, u) == 0) {
            printf(" => Your Email address is right.\n");
        } 
		else {
            printf(" => Your Email address is wrong .\n");
        }

        printf("\n\n Enter your Password : ");
        gets(pas);

        if (strcmp(pas, pwd) == 0) {
            printf("\n => Your password is right.\n");
            
        }
		 else {
            printf("\n => Your password is wrong.\n");
        }
        
        if(strcmp(email , u) == strcmp(pas , pwd)){
        	printf("\n => Your Login Successfully..\n");
		}
		else{
			printf("\n =>Login Failed. Invalid Credentials...");
		}

    }

}
