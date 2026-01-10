class Solution {
public:
    void printHollowRectangle(int n, int m) {
        // Implement the pattern printing logic here
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                for(int j=0;j<m;j++){
                    cout<<"* ";
                }
            }
            else{
                cout<<"* ";
                for(int j=0;j<m-2;j++){
                    cout<<"  ";
                }
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};