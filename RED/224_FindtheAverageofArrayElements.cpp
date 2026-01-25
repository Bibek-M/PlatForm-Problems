class Solution {
public:
    double findAverage(const vector<int>& arr) {
        // Implement logic to find the average
        double size =arr.size();
        double sum=0;
        for(int i=0;i<size;i++){
            sum+=arr[i];
        }
        double avg=sum/size;
        return avg;
    }
};