class Solution {
public:
    void printNumberPyramid(int n) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
        //Space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //Middle  Number
        for(int j=1;j<=i;j++){
        cout<<j<<" ";
        }
        cout<<endl;
    }
    }
};