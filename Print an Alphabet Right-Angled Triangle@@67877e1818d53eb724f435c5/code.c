// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch = 'A' ;
        for(int j=1;j<=i;j++){
            char ch = 'A' ;
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}