class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {
        // Implement logic to reverse the array
        vector<int> num=arr;
        
        int n=arr.size();
        int j=n-1;
        //While Loop
         // int i=0;
        // while(i<=j){
        //     swap(num[i],num[j]);
        //     i++;
        //     j--;
        // }

        //For Loop
        for(int i=0;i<=j;i++){
        swap(num[i],num[j]);
            j--;
        }
        return num;
    }
};