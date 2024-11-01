#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool is_possible(const vector<long long>& arr, long long max_diff) {
    int n = arr.size();
    int unpaired_count = 0;
    int i = 0;

    while (i < n) {
        if (i + 1 < n && arr[i + 1] - arr[i] <= max_diff) {
            i += 2; // Pair arr[i] and arr[i+1]
        } else {
            unpaired_count++;
            i++; // Move to next element without pairing
        }
    }
    // If no unpaired elements or exactly one unpaired, the configuration is valid
    if (unpaired_count == 0) return true;
    if (unpaired_count == 1) return max_diff >= 1;
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    long long left = 0, right = 1e18, answer = -1;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (is_possible(arr, mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
