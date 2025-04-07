// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    //input element
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int element = arr[0];
    // 
    for(int i=0;i<n;i++){
        if(element < arr[i]){
            element=arr[i];

        }         
    }
    printf("%d",element);
}