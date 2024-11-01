#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long totalCost = 0;
        int lastVisit = -1;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                if (lastVisit == i-1) {
                    totalCost -= i; // Applying discount (get the most expensive one for free)
                }
                else{
                lastVisit = i;
                totalCost += i + 1;
                }
            }
        }
        
        cout << totalCost << endl;
    }
}

int main() {
    solve();
    return 0;
}
