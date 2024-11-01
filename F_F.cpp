#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;


int countDistinctChars(const string &s, int l, int r) {
    unordered_set<char> chars;
    for (int i = l; i <= r; ++i) {
        chars.insert(s[i]);
    }
    return chars.size();
}


int findMinSubstringLength(const string &s, int l, int r, int distinct_count) {
    int min_length = r - l + 1;
    for (int i = l; i <= r; ++i) {
        unordered_set<char> current_chars;
        for (int j = i; j <= r; ++j) {
            current_chars.insert(s[j]);
            if (current_chars.size() == distinct_count) {
                min_length = min(min_length, j - i + 1);
                break;
            }
        }
    }
    return min_length;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    int l ,r;
    
    for (int i = 0; i < q; ++i) {
        cin >> l>>r;
        l--;r--;

        int distinct_count = countDistinctChars(s, l, r);
        int min_length = findMinSubstringLength(s, l, r, distinct_count);
        cout << min_length << endl;
    }

    return 0;
}
