class Solution {
public:
    void printNumberTriangle(int n) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
};