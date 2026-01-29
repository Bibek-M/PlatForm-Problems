#include <climits>
class Solution {
public:
  pair<int, int> highestAndLowestFrequency(vector<int> &arr) {
    int n = arr.size();
    vector<int> brr = arr;
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    // Highest Frequency
    int cf = 1;
    int maxf = 1;
    int mode = arr[0];
    for (int i = 1; i < n; i++) {
      if (arr[i] == arr[i - 1])
        cf++;
      else {
        cf = 1;
      }
      if (cf > maxf) {
        maxf = cf;
        mode = arr[i];
      }
    }

    // Lowest Frequency

    int minf = INT_MAX;
    int minNum = brr[0];
    int i = 0;
    while (i < n) {
      int count = 1;
      while (i + 1 < n && brr[i] == brr[i + 1]) {
        count++;
        i++;
      }

      if (count < minf) {
        minf = count;
        minNum = brr[i];
      }

      i++; 
    }
    return {mode, minNum};
  }
};