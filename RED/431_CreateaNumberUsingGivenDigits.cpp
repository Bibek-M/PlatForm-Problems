class Solution {
public:
    int createLargestNumber(vector<int>& digits) {
        sort(digits.begin(),digits.end());
        reverse(digits.begin(),digits.end());
        int n=digits.size();
        int num=0;
        for(int i=0;i<n;i++){
            num=num*10+digits[i];
        }
        return num;
    }
};