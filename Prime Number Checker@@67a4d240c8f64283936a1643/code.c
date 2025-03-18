// Your code here...
void isPrime(num){
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
        return 1;
    }else{
        return 0;
    }
}