class Solution {
public:
    void printAlphabetTriangle(int n) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
            char alpha ='A';
            for(int j=1;j<=i;j++){
                cout<<alpha;
                alpha++;
            }
            cout<<endl;
        }
    }
};