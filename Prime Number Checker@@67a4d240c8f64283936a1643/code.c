// Your code here...
int isPrime(num){
    bool flag =true;
    if(num<=1){
        flag=false;
    }else {
        for(int i=2;i<num;i++){
            if(num%i==0){
                flag = false;
                break;
            }
        }

    }
    if(flag==true){
        printf("%d\n",1);
    }else{
        printf("%d\n");
    }
}