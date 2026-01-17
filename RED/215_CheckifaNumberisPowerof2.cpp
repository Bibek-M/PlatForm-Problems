class Solution {
public:
    string isPowerOfTwo(int num) {
        // Implement logic to check if num is a power of 2
        // if(num==1){
        //     return "Yes";
        // }
        // if(num==0){
        //     return "No";
        // }
        // if (num%2==0){
        //     return "Yes";
        // }
        // else{
        //     return "No";
        // }

        //Correct ans
        if(num==0){
            return "No";
        }
        if((num &(num-1))==0){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};