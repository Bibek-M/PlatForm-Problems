class Solution {
public:
    void printDigits(long long N) {
        // your code goes here
        //Covert the int to string
        string s= to_string(N);
        for(int i=0;i<s.length();i++){
            cout<<s[i];
            if(i!=s.length()-1){
                cout<< " ";
        }
        }
    }
};
