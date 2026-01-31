class Solution {
public:
 vector<vector<int>> threeSum(vector<int>& nums) {
        // Implementation will go here
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            //Optimization 1 duplicates
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            } 
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    //answer
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(nums[j]==nums[j-1]){
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};