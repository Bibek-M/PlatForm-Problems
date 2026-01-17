class Solution {
public:
    int reverseNumber(int num) {
        // Implement logic to reverse the number
        int ans=0;
        while (num !=0){
            int digit = num%10;
            ans = ans*10 + digit;
            num= num/10;
        }
        return ans;
    }
};