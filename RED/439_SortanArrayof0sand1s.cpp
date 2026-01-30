#include<algorithm>
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>arr=nums;
        int n=nums.size();
        // Using STL
    // sort(arr.begin(),arr.end());
    //Using Counting
    int Zerocount=0;
    int Onecount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            Zerocount++;
        }
        else{
            Onecount++;
        }
    }
    //Note Clear the array first before reusing it for another loop
    arr.clear();
    for(int i=0;i<Zerocount;i++){
        arr.push_back(0);
    }
    for(int i=Zerocount;i<n;i++){
        arr.push_back(1);
    }
    //Fill Function
    // fill(arr.begin(),arr.begin()+Zerocount,0);
    // fill(arr.begin()+Zerocount,arr.end(),1);
    return arr;
    }
};