class Solution {
public:
    void printSolidPyramid(int n) {
        // Implement the pattern printing logic here
        //Printing Spaces
        for(int i=1;i<=n;i++){
          for(int j=1;j<=n-i;j++){
            cout<<"  ";
          }
         
          for(int k=1;k<=(2*i-1);k++){
            cout<<"* ";
          }
          
          cout<<endl;
        }
    }
};