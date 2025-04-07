// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    // input element
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bool a=true;
    // sorted array
    for(int i=0;i<=n-1;i++){
        if(arr[i]>arr[i+1]){
            a=false;
            break;
        }
    }
    // checkig condition
    if(a==true){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    
}