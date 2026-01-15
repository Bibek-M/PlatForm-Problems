class Solution {
public:
    void printInvertedAlphabetTriangle(int n) {
        // Implement the pattern printing logic here
            for (int i = 1; i <= n; i++)
    {
        char alpha = 'A';
        for (int j = 0; j <= n-i; j++)
        {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }

    }
};