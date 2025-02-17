// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int j=1;j<=i;j++){
            char ch = 65 + j -1 ;
            printf("%c ",ch);
        }
        printf("\n");
    }
}