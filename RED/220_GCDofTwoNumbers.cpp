class Solution {
public:
    int findGCD(int a, int b) {
        // Implement logic to find GCD of a and b
    //Using uclid formula
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
        return a;
    }
};