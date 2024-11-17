#include <iostream>
#include <vector>
using namespace std;

void make_non_decreasing(int N, int K, vector<int>& A) {
    vector<int> operations;
    const int MAX_OPERATIONS = 500000;

    for (int iteration = 0; iteration < MAX_OPERATIONS; ++iteration) {
        bool made_change = false;

        for (int i = 0; i < N - 1; ++i) {
            if (A[i] > A[i + 1]) {
                // Perform the operation
                int temp = A[i];
                A[i] = A[i + 1] + K;
                A[i + 1] = temp;
                operations.push_back(i + 1); // Store 1-based index
                made_change = true;

                if (operations.size() > MAX_OPERATIONS) {
                    cout << "No" << endl;
                    return;
                }
            }
        }

        // If no changes were made in this iteration, the array is fixed
        if (!made_change) break;
    }

    // Check if the array is non-decreasing
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] > A[i + 1]) {
            cout << "No" << endl;
            return;
        }
    }

    // Print the result
    cout << "Yes" << endl;
    cout << operations.size() << endl;
    for (int op : operations) {
        cout << op << " ";
    }
    cout << endl;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    make_non_decreasing(N, K, A);

    return 0;
}
