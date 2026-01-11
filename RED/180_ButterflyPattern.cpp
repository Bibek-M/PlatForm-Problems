class Solution {
public:
    void printPattern(int n) {
         //top
    for(int i=1;i<=n-1;i++){
        //Begining Stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //Middle Space
        for(int  k=1;k<=(2*n)-(i*2);k++){
            cout<<" ";
        }
        //Ending Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    //Middle
    for(int  i=1;i<=2;i++){
        for(int j=1;j<=n*2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //End
    for(int i=1;i<=n-1;i++){
        //Begining Stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //Middle Spaces
        for(int k=1;k<=i*2;k++){
            cout<<" ";
        }
        //Ending Stars
        for(int l=1;l<=n-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    }
};