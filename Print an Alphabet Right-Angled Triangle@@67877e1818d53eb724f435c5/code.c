#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        char ch = 'A'; // Initialize 'ch' to 'A' for each row
        for(int j = 1; j <= i; j++){
            printf("%c ", ch); // Print the current character
            ch++; // Move to the next character
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}