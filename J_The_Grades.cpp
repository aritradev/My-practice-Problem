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
struct stu{
    string s;
    int a,b,c,d;
    ll sum;

};
bool cmp(stu s1,stu s2){
    if(s1.sum==s2.sum)return s1.s<s2.s;
    return s1.sum>s2.sum;
}

void solve()
{
    int  n;cin>>n;
    stu st[n];
    for(int i = 0 ;  i  < n; i++){
        cin>>st[i].s>>st[i].a>>st[i].b>>st[i].c>>st[i].d;
        st[i].sum = st[i].a+st[i].b+st[i].c+st[i].d;
    }
    sort(st,st+n,cmp);
    for(int i = 0 ; i < n ;i++){
        cout<<st[i].s<<sp<<st[i].sum<<sp<<st[i].a<<sp<<st[i].b<<sp<<st[i].c<<sp<<st[i].d<<endl;

    }

    
}

int main()
{
    optimize();

    ll tc = 1;
    //cin >> tc;
    while(tc--)
    {

        solve();
    }

    return 0;
}