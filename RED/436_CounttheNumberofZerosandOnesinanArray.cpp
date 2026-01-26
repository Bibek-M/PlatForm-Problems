class Solution {
public:
    std::pair<int, int> countZerosAndOnes(std::vector<int>& nums) {
        // Implement this method
    int size =nums.size();
    int zeros =0;
    int ones =0;
    for(int i=0;i<size;i++){
        if(nums[i]==0){
            zeros+=1;
        }
        else{
            ones+=1;
        }
    }
    return {zeros,ones}; 
    }
};