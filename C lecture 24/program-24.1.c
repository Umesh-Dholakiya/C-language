#include<stdio.h>

main(){
		
	int i ,n, *p;
		
	printf("Enter Your array's Size : ");
	scanf("%d", &n);
	
	int arr[n];
	p = &arr;
	
	for(i = 0; i < n; i++){
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n; i++){	
		printf("Square of each element : %d \n" ,(*(p + i) )**(p + i)  );		
	}
}
