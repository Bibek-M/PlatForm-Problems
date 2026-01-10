class Solution {
public:
    void printInvertedRightAngleTriangle(int n) {
        // Implement the pattern printing logic here
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};