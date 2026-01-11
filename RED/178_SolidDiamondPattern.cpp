class Solution {
public:
    void printSolidDiamond(int n) {
        // Implement the pattern printing logic here
        //Upper part
        for(int i=1;i<=n;i++){
        //Printing spaces
            for(int j=1;j<=(n-i);j++){
                cout<<" ";
            }
            //Printing Stars
            for(int k=1;k<=(i*2)-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        //Lower Part
        for(int i=1;i<n;i++){
            //Lower Spaces
            for(int j=1;j<=i;j++){
                cout<<" ";
            }
            //Lower Stars
            for(int k=1;k<=(n*2)-(i*2)-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};