class Solution {
public:
    void printEvenNumbers(int n) {
        // Implement the loop logic to print even numbers from 1 to n
        for(int i=2;i<=n;i=i+2){
             cout<< i;
            if(i!=n-1 && i!=n ){
               cout <<" ";
             }
        }
    }
};