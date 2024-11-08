#include <bits/stdc++.h>
using namespace std;

#define cobra_69xp
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

using ll = long long int;
using ull = unsigned long long int;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define in insert
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define sp " "
#define endl "\n"
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define debug(x) cout << "Debug of " << #x << ": " << x << endl;

const int mod = 1e9 + 7;
const int inf = 2000000000;
const ll INF = 9000000000000000000;

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
ll sum(ll n) { return ((n * (n + 1)) / 2); }
ll ceil(ll a, ll b) { return ((a + (b - 1)) / b); }

void InputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/Programming File/input.txt", "r", stdin);
    freopen("E:/Programming File/output.txt", "w", stdout);
#endif
}

void solve()
{
}

int main()
{
    optimize();

    int tc;
    cin >> tc;
    vector<pair<int, int>>v = { {4, 24}, {5, 19}, {7, 14}, {8, 12}, {9, 11}, {10, 10},{20,5}};
    for (int rows = 1; rows <= 94; ++rows) {
        if (94 % rows == 0) {
            int columns = 94 / rows;
            v.pb({rows, columns});
        }
    }
    sort(all(v));

    for (int i = 1; i <= tc; i++)
    {
        char c1, c2;
        cin >> c1 >> c2;

        int in1 = c1 - 33;
        int in2 = c2 - 33;
        vector<pair<int, int>> p;

        for (const auto &u : v) {
            int rows = u.ff;
            int cols = u.ss;

            if ((in1%rows) == (in2%rows)) {
                p.pb(u);
            }
        }
        for(const auto &u : p){
            cout<<u.ff<<sp<<u.ss<<endl;
        }cout<<endl;
    }

    return 0;
}