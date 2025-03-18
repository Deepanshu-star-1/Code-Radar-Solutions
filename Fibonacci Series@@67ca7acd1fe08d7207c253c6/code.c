#include<stdio.h>
void f(int n){
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }else {
        int a=0,b=1;
        for(int i=1;i<=n;i++){
            printf("%d ",a);
            a=b;
            int c;
            c=a+b;
            b=c;
        }
    }  
}
int main(){
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}