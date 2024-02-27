#include<stdio.h>

main(){
	
	int n ,i;
	
	printf("Enter Your Size : ");
	scanf("%d" , &n);
	
	int arr[n];
	
	for(i = 0; i < n; i++){
		printf("arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n / 2; i++){
		int temp = arr[i];
		arr[i] = arr[ n - 1 - i];
		arr[ n - 1 - i] = temp;
	}
	
	for(i = 0; i < n; i++){
		printf("%d \t", arr[i]);
	}
		
}
