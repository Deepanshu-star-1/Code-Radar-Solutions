// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1 ;i<=n;i++){
        int p=1;
        for(int j=1 ;j<=n;j++){
            printf("%d",p);
            int p = p * (i+j)/(j-1);
        }
    }

}