class Solution {
public:
    void printHollowPyramid(int n) {
        for(int i = 1; i <= n; i++){
            // Printing leading spaces
            for(int j = 1; j <= n - i; j++){
                cout << "  ";
            }

            // Printing stars and spaces for the hollow part
            if(i == 1) {
                // First row just prints one star
                cout << "* ";
            } 
            else if(i == n) {
                // Last row prints full stars
                for(int k = 1; k <= (2 * n - 1); k++){
                    cout << "* ";
                }
            } 
            else {
                // Middle rows print a star, spaces, then another star
                cout << "* "; // Left star
                
                for(int k = 1; k < (2 * i - 2); k++) {
                    cout << "  "; // Hollow spaces
                }
                
                cout << "*"; // Right star
            }
            
            cout << endl; // Move to the next line
        }
    }
};