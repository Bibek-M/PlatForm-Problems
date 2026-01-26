class Solution {
public:
    vector<int> shiftRight(const vector<int>& arr) {
        vector<int>num =arr;
        int n=arr.size();
        int last=num[n-1];
        for(int i=n-1;i>0;i--){
            num[i]=num[i-1];
        }
        num[0]=last;
        return num;
    }
};