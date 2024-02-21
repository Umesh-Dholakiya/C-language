#include <stdio.h>

int swap(int *x, int *y) {
    int ans = *x;
    *x = *y;
    *y = ans;
}

void main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

}
