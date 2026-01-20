class Solution {
public:
    int countTotalSetBits(int n) {
        int count =0;
        for(int i=1;i<=n;i++){
          int x=i;
          while(x>0){
            int rem=x%2;
            x/=2;
            if(rem==1){
                count++;
            }
          }
          //Using Bit 
        //   while(x>0){
        //     int bit = x&1;
        //     x>>=1;
        //     if(bit==1){
        //         count++;
        //     }
        //   }

        }
        return count;
    }
};