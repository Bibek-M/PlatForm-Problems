class Solution {
public:
    int countDivisors(int num) {
        // Implement logic to count divisors of num
        int divisors=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                divisors++;
            }
        }
        return divisors;
    }
};