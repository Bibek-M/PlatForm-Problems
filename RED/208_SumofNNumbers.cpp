class Solution {
public:
    int sumNumbers(int n) {
        //do not write cin >> n, as input n is already taken in the driver code
        // Implement the loop logic to sum n numbers
        int sum=0;
        int num;
        for(int i=0;i<n;i++){
        cin>>num;
        sum+=num;
        }
        return sum;
    }
};