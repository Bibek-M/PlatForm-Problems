class Solution {
public:
    void printReverseAlphabetTriangle(int n) {
        // Implement the pattern printing logic here
         for(int i=1;i<=n;i++){
        //This is the main statement in which the starting alphabet is defined as A + n-i which will change it in each row
        char alpha ='A'+(n-i);
        for(int j=1;j<=i;j++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
    }
    }
};