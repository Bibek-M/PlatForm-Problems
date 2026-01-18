class Solution {
public:
    string isPrime(int num) {
        // Implement logic to check if num is prime
        bool isPrime=true;
        for(int i=2;i<=num-1;i++){
            if(num%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};