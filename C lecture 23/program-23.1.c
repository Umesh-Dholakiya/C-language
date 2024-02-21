#include<stdio.h>

void sum(int x,int y){
	printf("\nSum of x and y is %d\n" ,x + y);
}
void sub(int x,int y){
	printf("\nSubstraction of x and y is %d\n" ,x - y);
}
void multiply(int x ,int y){
	printf("\nMultiply of x and y is %d\n" ,x * y);
}
void division(int x ,int y){
	printf("\ndivision of x and y is %d\n" ,x / y);
}
void Modulo(int x ,int y){
	printf("\nModulo of x and y is %d\n" ,x % y);
}

void main(){
	
	int a, b, choice;
	
	printf("Enter Your First Number :  ");
	scanf("%d", &a);
	
	printf("Enter Your Second Number :  ");
	scanf("%d", &b);
	
	do{
		printf("\nPress 1 for + \n");
		printf("Press 2 for - \n");
		printf("Press 3 for * \n");
		printf("Press 4 for / \n");
		printf("Press 5 for %% \n");
		printf("Press 0 for Exit...\n\n");

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
	}while(choice != 0);
}

