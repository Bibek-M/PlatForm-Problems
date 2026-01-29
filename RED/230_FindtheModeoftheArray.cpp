// #include<algorithm>
//First sort the array
class Solution {
public:
    int findMode(const vector<int>& arr) {
        int n=arr.size();
        vector<int>v =arr;
        sort(v.begin(),v.end());
        int maxf=1;
        int mode=v[0];
        int cf=1;
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1])
                cf++;
            else
            cf=1;
            if(cf>maxf){
                maxf=cf;
                mode=v[i];
            }
        }
        return mode;
    }
};