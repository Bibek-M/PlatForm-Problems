class Solution {
public:
    void printHollowSquare(int n) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
            if(i==1 || i==n){
        //for all the stars
              for(int j=1;j<=n;j++){
                  cout<<"* ";
              }
            }
            else{
        //For First *
            cout<<"* ";
        //For Middle Spaces
               for(int k=1;k<=(n-2);k++){
                cout<<"  ";
               }
        //For last *
               cout<<"* ";
            }
            cout<<endl;
        }
    }
};