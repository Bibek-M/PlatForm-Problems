class Solution {
public:
    pair<int, int> sumPositiveNegative(const vector<int>& arr) {
        // Implement logic to calculate sums of positive and negative elements
        int n=arr.size();
        int pos=0;
        int neg=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos+=arr[i];
            }
            else{
                neg+=arr[i];
            }
        }
        return {pos,neg};
    }
};