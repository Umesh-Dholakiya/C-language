#include <stdio.h>

void cube() {
    int n,i ,j;
    printf("Enter array's size: ");
    scanf("%d", &n);

    int arr[n][n];
    int *ptr = &arr[n][n];

    printf("\nEnter array elements:\n");
    for( i = 0; i < n; i++) {
        for( j = 0; j < n; j++) {
        	printf("arr[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

   printf("\nCubes of all elements:\n");
	for(i = 0; i < n; i++){
		for(j = 0;j < n; j++){
			*ptr = arr[i][j] * arr[i][j] * arr[i][j];
			printf(" %d\t", *ptr);
		}
		printf("\n");
	}

}

void main() {
    
    cube();
}
