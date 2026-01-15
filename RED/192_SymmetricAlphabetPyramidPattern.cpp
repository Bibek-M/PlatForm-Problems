class Solution {
public:
    void printSymmetricAlphabetPyramid(int n) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        char txt1='A';
        for(int k=1;k<=i;k++){
            cout<<txt1;
            txt1++;
        }

        txt1 -= 2;
        for(int l=1;l<=i-1;l++){
            cout<<txt1;
            txt1--;
        }
        cout<<endl;
    }
    }
};