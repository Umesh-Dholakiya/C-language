#include<stdio.h>

void sum(int x,int y){
	printf("Sum of A and B is %d\n" ,x + y);
}
void sub(int x,int y){
	printf("Substraction of A and B is %d\n" ,x - y);
}
void multiply(int x ,int y){
	printf("Multiply of A and B is %d\n" ,x * y);
}
void division(int x ,int y){
	printf("division of A and B is %d\n" ,x / y);
}
void Modulo(int x ,int y){
	printf("Modulo of A and B is %d\n" ,x % y);
}
void main(){
	
	int a, b, choice;
	
	printf("Enter Your First Number :  ");
	scanf("%d", &a);
	
	printf("Enter Your Second Number :  ");
	scanf("%d", &b);
	
	do{
		printf("Press 1 for + \n");
		printf("Press 2 for - \n");
		printf("Press 3 for * \n");
		printf("Press 4 for / \n");
		printf("Press 5 for %% \n");
		printf("Press 0 for Exit...\n");

		printf("Enter Your choice : ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				sum(a , b);
				break;
			case 2:
				sub(a , b);
				break;
			case 3:
				multiply(a , b);
				break;
				
			case 4:
				division(a , b);
				break;
				
			case 5:
				Modulo(a , b);
				break;
				
			case 6:
				printf("You are exited from program..\n");
				break;
				
		default:
			printf("Your input is wrong..\n\n");
			break;
		}
	}while(choice !=0);
}

