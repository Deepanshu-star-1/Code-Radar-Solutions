// Your code here...
#include<stdio.h>
int main(){
    int n;  // n=1
    scanf("%d",&n);
    for(int i=0;i<n;i++){. // i=0
        for(int j=1;j<n-i;j++){
            print(" ");
        }
        for(int k=1; k<=2i+1;k++){
            printf("*");
        }
        printf("/n");
    }
}