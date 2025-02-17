#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int a; // Declare 'a' outside the inner loop to retain its value during toggling
        if (i % 2 != 0) {
            a = 1; // Start with 1 for odd rows
        } else {
            a = 0; // Start with 0 for even rows
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", a);
            if (a == 1) {
                a = 0;
            } else {
                a = 1;
            }
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
