class Solution {
public:
    string isPrime(int n) {
        for(int i=2;i<n;i++){
            if(n%i==0){
                return "No";
            }
        }
        return "Yes";
    }
};
