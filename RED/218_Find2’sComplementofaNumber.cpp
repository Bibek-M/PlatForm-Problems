class Solution {
public:
    int twosComplement(int num) {
        // Implement logic to find 2's complement of num
        //Formula 1s complement +1
        int onesComplement =~num;
        int twosComplement = onesComplement+1;
        return twosComplement;
    }
};