// Your code here...
isPrime(num){
    bool flag =true;
    if(n<=1){
        flag=false;
    }else {
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag = false;
                break;
            }
        }

    }
    if(flag==true){
        printf("1");
    }else{
        printf("0");
    }
}