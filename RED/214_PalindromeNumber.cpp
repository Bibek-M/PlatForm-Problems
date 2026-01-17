class Solution {
public:
    string isPalindrome(int num) {
        // Implement logic to check if num is a palindrome
       
       int num1 =num; 
        int ans=0;
        while (num !=0){
            int digit = num%10;
            ans = ans*10 + digit;
            num= num/10;
        }
        // cout<<ans;
        if (ans==num1){
            return "Yes";
        }
        else{
            return "No";
        }
         // Placeholder return; user will complete the logic
    }
};