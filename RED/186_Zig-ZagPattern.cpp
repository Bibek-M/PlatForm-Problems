class Solution {
public:
    void printZigZag(int n) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=2*(n-i)+1;k++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //middle Part
    for(int i=1;i<=n;i++){
            cout<<" ";
    }
    cout<<"*"<<endl;
    //Bottom Part
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=(2*i)-1;k++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    }
};