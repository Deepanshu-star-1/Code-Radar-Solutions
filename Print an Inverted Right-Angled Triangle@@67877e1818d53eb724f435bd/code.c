#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Corrected scanf

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) { 
            printf("*"); // Corrected print statement
        }
        printf("\n"); // Corrected print statement
    }

    return 0;
}
