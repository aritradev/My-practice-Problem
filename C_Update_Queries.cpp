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
    int n, m;
    cin >> n >> m;
    string s ;
    cin >> s ;
    vector<int> v(m);
    for (auto &u : v) cin >> u ;

    string s1;
   
    cin >> s1;

    sort(s1.begin(), s1.end());

    map<int, int> mp;
    for (auto u : v) mp[u]++;
    int x = 0;
    for (auto u : mp)
    {
        x = x + u.second - 1;
    }
    s1 = s1.substr(0, m - x);
    int i = 0;
    for (auto u : mp)
    {
        int pos = u.first;
        s[pos - 1] = s1[i];
        i++;
    }
    cout << s << endl;
}

int main()
{
    optimize();

    ll tc = 1;
    cin >> tc;
    while (tc--)
    {

        solve();
    }

    return 0;
}