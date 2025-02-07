#include<stdio.h>
int main(){
    int n;
    scanf("%d",n);
    for(int i=1;i<=n;i++){
        for(int j=n+1-i;j<=0;j++){
            print("*");
        }
    }
}