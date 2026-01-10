class Solution {
public:
    void printSolidRectangle(int n, int m) {
        // Implement the pattern printing logic here
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};