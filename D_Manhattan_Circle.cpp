#include <bits/stdc++.h>
using namespace std;

#define cobra_69xp
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

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
   int n ,m;cin>>n>>m;
   char arr[n+8][m+6];
   int r1=-1, r2=-1;
   int c1 = mod, c2=-1;
   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= m; j++)
       {
           cin >> arr[i][j];
           if (arr[i][j] == '#' && r1 == -1)
               r1 = i;
           if (arr[i][j] == '#')
               r2 = i;
           if (arr[i][j] == '#' && c1 > j)
               c1 = j;
           if (arr[i][j] == '#' && c2 < j)
               c2 = j;
       }
   }
   int x = (r1+r2)/2;
   int y = (c1+c2)/2;
   cout<<x<<sp<<y<<endl;
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