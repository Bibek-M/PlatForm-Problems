class Solution {
public:
    void printFloydsTriangle(int n) {
        // Implement the pattern printing logic here
        int count =0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                count++;
                cout<<count<<" ";
            }
            cout<<endl;
        }
    }
};