// Your code here...
#include<stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
printArray(int arr[],int n ){
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }


}

int main(){
    
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);

}