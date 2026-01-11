class Solution {
public:
    void printInvertedSolidPyramid(int n) {
        // Implement the pattern printing logic here
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n-1;j++){
        //         cout<<" ";
        //         for(int k=1;k<((n*2)-(2*i)-i);k++){
        //             cout<<"*";
        //         }
        //     }
        //     cout<<endl;
        // }

        //
            // int n = 5;
    // print spaces like  triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        //for Printing stars
        for(int k=1;k<=((n*2)-(2*i-1));k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    }
};