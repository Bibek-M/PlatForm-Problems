#include<climits>
class Solution {
public:
    int smallestDigit(int num) {
        // Implement logic to find the smallest digit
        int smallest=INT_MAX;
        while(num!=0){
            int digit =num%10;
            if(digit<smallest){
                smallest=digit;
            }
            num/=10;
        }
        return smallest;
    }
};