//This is a AI Solution as i tried in my way and unable to solve here but my code is working fine in Vs code
class Solution {
public:
    void printHollowDiamond(int n) {
        // Implement the pattern printing logic here
        int totalRows = 2 * n - 1;
        for (int i = 0; i < totalRows; i++) {
        int spaces = abs(n - 1 - i);
        int innerSpaces = 2 * (n - spaces) - 3;

        // Leading spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Printing the first asterisk
        cout << "*";

        // Printing the inner spaces and second asterisk
        if (innerSpaces >= 1) {
            for (int j = 0; j < innerSpaces; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    }
};