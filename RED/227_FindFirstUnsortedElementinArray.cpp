#include<algorithm>
class Solution {
public:
    int findFirstUnsortedIndex(const vector<int>& arr) {
      int n=arr.size();
    for(int i=0;i<n-1;i++){ //Here we took n-1 because there is no element after i
    // As we are comparing i with i+1 than it will be in valid 
        if(arr[i]>arr[i+1]){
            return i;
        }
    }
    return -1;
    }
};