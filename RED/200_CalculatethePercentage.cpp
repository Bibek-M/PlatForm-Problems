class Solution {
public:
    double calculatePercentage(int totalMarks, int obtainedMarks) {
        // Implement the logic to calculate the percentage
        double a= totalMarks;
        double b=obtainedMarks;
        double percentage = (b/a)*100;
        return percentage;
    }
};