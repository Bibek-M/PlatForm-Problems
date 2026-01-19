bool isPrime(int n) {
    // Your code here
    if(n==1){
        return false;
    }
    else{

        for(int i=2;i<n-1;i++){
        if(n%i==0){
            return false;
        }
    }
        return true;
    }
    
}