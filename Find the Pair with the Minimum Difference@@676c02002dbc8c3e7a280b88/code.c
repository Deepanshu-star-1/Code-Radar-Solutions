#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    // Read the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    qsort(arr, n, sizeof(int), compare); 

    int min_diff = __INT_MAX__; // Initialize min_diff to the maximum integer value
    int u = 0, v = 0; // Variables to store the two numbers with the smallest difference
    if(n==1){
        printf("%d",1);
    }

    // Loop to find the minimum difference
    for(int i = 0; i < n - 1; i++) {

        int diff = arr[i + 1] - arr[i]; // Difference between consecutive elements
        if (diff < min_diff) {
            min_diff = diff; // Update minimum difference
            u = arr[i]; // First number
            v = arr[i + 1]; // Second number
        }
    }

    // Output the pair with the minimum difference
    printf("%d %d\n", u, v); 
    return 0;
}