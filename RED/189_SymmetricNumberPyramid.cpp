class Solution {
public:
    void printPattern(int n) {
        for(int  i=1;i<=n;i++){
        //Starting Numbers
        for(int j=1;j<=i;j++){ 
            // int num=1;
            // num=i+1;
            cout<<j;
    }
    //Middle Spaces
    for(int k=1;k<=(n*2)-(i*2);k++){
        cout<<" ";
    }
    //End Number
    for(int j=i;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
}
    }
};