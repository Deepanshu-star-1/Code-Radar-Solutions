#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                int a =1
                printf("%d",a);
                if(a==1){
                    a = 0;
                }else{
                    a =1;
                }
            }
        }else{
            for(int j=1;j<=i;j++){
                int a =0
                printf("%d",a);
                if(a==1){
                    a = 0;
                }else{
                    a =1;
                }
            }

        }

    }
}