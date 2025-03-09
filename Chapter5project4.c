#include <stdio.h>

int main() {
    int n;
    printf("Enter wind speed in knots: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Calm\n");
    } else if (n < 4) {
        printf("Light air\n");
    } else if (n < 28) {
        printf("Breeze\n");
    } else if (n < 48) {
        printf("Gale\n");
    } else if (n < 64) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }

    return 0;
    
}