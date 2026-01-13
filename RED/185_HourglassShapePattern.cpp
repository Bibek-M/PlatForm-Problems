class Solution {
public:
    void printHourglass(int n) {
        // Implement the pattern printing logic here
        //Upper Part
        for(int i=0;i<n;i++){
            //Spaces
             //Here we take j=1 because first line does not have any spaces in the begining
            for(int j=1;j<=i;j++){
                cout<<" ";
            }
            for(int k=0;k<2*(n-i);k++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i++){
            //Spaces
            //Here we take j=2 because first line does not have any spaces in the begining
            for(int j=2;j<=n-i+1;j++){
                cout<<" ";
            }
            //Stars
            for(int k=1;k<=i*2;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};