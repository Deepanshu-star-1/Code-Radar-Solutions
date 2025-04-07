// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    // input element
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isSorted =1;
    // sorted array
    for(int i=0;i<=n-1;i++){
        if(arr[i]>arr[i+1]){
            isSorted=0;
            break;
        }
    }
    // checkig condition
    if(isSorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    
}