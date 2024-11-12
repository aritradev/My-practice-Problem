#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;  // Number of test cases

    while (test--) {
        int n, qx, qy;
        cin >> n >> qx >> qy;  // Read grid size (n) and target coordinates (qx, qy)
        string s;
        cin >> s;  // Movement instructions

        int x = 0, y = 0;  // Alice's initial position
        bool flag = false;  // Flag to check if target is reached
        int ct = 0;  // Counter to limit movement loops

        // Outer loop to control the number of iterations
        while (ct < 100) {
            for (char ch : s) {
                // Update coordinates based on the current direction
                if (ch == 'N') y++;
                else if (ch == 'W') x--;
                else if (ch == 'S') y--;
                else if (ch == 'E') x++;

                // Check if Alice has reached the target
                if (x == qx && y == qy) {
                    flag = true;
                    break;
                }
            }

            if (flag) break;  // Exit if target is reached
            ct++;  // Increment counter
        }

        // Output result based on the flag
        if (!flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
