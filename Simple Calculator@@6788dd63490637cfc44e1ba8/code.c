#include <stdio.h>

int main() {
    int a, b;
    char ch;
    
    // Input two integers and an operator
    scanf("%d %d %c", &a, &b, &ch);
    
    // Switch statement to handle different operations
    switch (ch) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            // Check for division by zero
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}