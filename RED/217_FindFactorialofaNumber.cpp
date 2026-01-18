class Solution {
public:
    unsigned long long factorial(int num) {
        // Implement logic to find factorial of num
        long long int  fact=1;
        for(int i=2;i<=num;i++){
            fact= fact*i;

        }
        return fact;
    }
};