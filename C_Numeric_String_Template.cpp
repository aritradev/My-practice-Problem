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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    int m;
    cin >> m;
    while (m--)
    {
        string s;
        cin >> s;
        if (s.size() != n)
        {
            NO;
            continue;
        }
        map<char, vector<int>> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]].push_back(i);
        }
        bool ok = true;
        for (auto u : mp)
        {
            for (int j = 0; j < u.second.size() - 1; j++)
            {
                if (v[u.second[j]] != v[u.second[j + 1]])
                    ok = false;
            }
        }
        if (!ok)
        {
            NO;
            continue;
        }
        map<int, vector<int>> mp2;
        for (int i = 0; i < v.size(); i++)
        {
            mp2[v[i]].push_back(i);
        }
        for (auto u : mp2)
        {
            for (int j = 0; j < u.second.size() - 1; j++)
            {
                if (s[u.second[j]] != s[u.second[j + 1]])
                    ok = false;
            }
        }
        if (!ok)NO;
        else YES;
        
    }
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