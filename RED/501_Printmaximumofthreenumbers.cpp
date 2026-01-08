#include <algorithm>
class Solution {
public:
    int maxi(int a , int b , int c) {
               int ans = (a>b) ? a:b ;
               ans = (ans>c) ? ans : c;
               return ans;
    }
};