#include<climits>
class Solution {
public:
    int findMaximum(vector<int>& arr) {
        // Your code here
        int size =arr.size();
        int maxi=INT_MIN;
        for(int i=0;i<size;i++){
            maxi =max(maxi,arr[i]);
        }
        return maxi;
    }
};