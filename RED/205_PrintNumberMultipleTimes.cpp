class Solution {
public:
    void printNumberMultipleTimes(int num, int n) {
        // Implement the loop logic to print num, n times
        for(int i=0;i<n;i++){
            cout<<num;
            //We dont need the last space in the last number
           if(i!=n-1){
            cout <<" ";
            }
        }
    }
};