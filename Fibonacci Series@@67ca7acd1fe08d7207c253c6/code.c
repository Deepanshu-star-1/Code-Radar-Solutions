
void fibonacciSeries(int n){
    if(n<=0){
        printf("Invalid input\n");
    }else {
        int a=0,b=1;
        for(int i=1;i<=n;i++){
            printf("%d ",a);
            int c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }  
}
