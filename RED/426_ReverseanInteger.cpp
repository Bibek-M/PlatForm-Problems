class Solution {
public:
    long long int reverse(int x) {
        long long int n=0;
        while(x!=0){
            int digit =x%10;
            n=n*10+digit;
            x/=10;
        }
        //Handle Edge Cases for numbers which exceeds the size of integer
        if(n>INT_MAX){
            return 0;
        }
        if(n<INT_MIN){
            return 0;
        }
    return n;

    }
};