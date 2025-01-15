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
typedef __int128 lll;

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
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    ll p = 1, cnt = 0;
    while (p <= r2)
    {
        ll mn = l2 / p;
        if (l2 % p)
            mn++;
        ll mx = r2 / p;
        
        mn = max(mn, l1);
        mx = min(mx, r1);
        if (mn <= mx)
            cnt += (mx - mn + 1);
        p *= k;
    }
    cout<<cnt<<endl;
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