#include <bits/stdc++.h>
using namespace std;

#define cobra_69xp
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using ll = long long int;
using ull = unsigned long long int;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define in insert
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

const int mod = 3e9 + 7;
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
    int n;
    string s;
    cin >> s;
    n = s.size();
    int cnt =0;
    for(int i = 0 ; i < n-3 ; i++){
        if(s.substr(i,4)=="1100")cnt++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i, v;
        cin >> i >> v;
        i--;
        for (int j = i - 3; j < i + 1; j++)
        {
            if (j < 0 || j + 3 >= n)
                continue;
            if (s.substr(j, 4) == "1100")
                cnt--;
        }
        s[i] = '0' + v;
        for (int j = i - 3; j < i + 1; j++)
        {
            if (j < 0 || j + 3 >= n)
                continue;
            if (s.substr(j, 4) == "1100")
                cnt++;
        }
        if (cnt > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    optimize();

    ll tc = 1;
    cin >> tc;
    while(tc--)
    {

        solve();
    }

    return 0;
}