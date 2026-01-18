class Solution {
public:
    int findLCM(int a, int b) {
        int x = a, y = b;
        
        // Calculate GCD using Euclidean algorithm
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        
        int gcd = x;
        return (a / gcd) * b; // LCM formula
    }
};
