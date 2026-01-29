#include<algorithm>
class Solution { 
public: 
    vector<int>printExtremeElementsAlternately(vector<int>& arr) { 
        vector<int>ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0,j=n-1;i<=j;i++,j--){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
        }
        return ans;
}
};