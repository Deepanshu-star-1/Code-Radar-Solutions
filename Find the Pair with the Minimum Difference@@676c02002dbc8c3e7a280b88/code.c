#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        int arr[i] = x;
    }
    int d=0;
    int u=0;
    int n=0;
    for(int i=0;i<n;i++){
        int a = arr[i];
        int b = arr[i+1];
        if(d<a-b){
            continue;
        }else{
            u=a;
            n=b;
        }
    }
    printf("%d %d",u,n);

}