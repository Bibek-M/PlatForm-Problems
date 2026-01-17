class Solution {
public:
    int sumOfDigits(int num) {
        // Implement logic to calculate the sum of digits
        int sum=0;
        while(num!=0){
            int digit= num%10;
            sum+=digit;
            num/=10;
        }
        return sum;
    
    }
};