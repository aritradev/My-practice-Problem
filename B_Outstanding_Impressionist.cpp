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
    int n ; cin>>n;
    vector<pair<int,int>>v(n);
    vector<int>ans;
    string s;
    set<int>st;
    map<int,int>mp;
    for(auto &u:v){
        cin>>u.ff>>u.ss;
    }
    for(auto u:v){
        if(u.ff==u.ss){
            st.insert(u.ff);
            mp[u.ff]++;
        }
    }
    for(auto u:st){
        ans.push_back(u);
    }
    for(auto u:v){
        int l =  u.ff;
        int r = u.ss;
        if(l==r){
            if(mp[l]>1)s+='0';
            else s+='1';
            continue;
        }
        int low=lb(all(ans),l)-ans.begin();
	    int up=lb(all(ans),r+1)-ans.begin();
        cout<<low<<sp<<up<<endl;
	    int len=(up-1)-low+1;
        if(len==r-l+1)s+='0';
        else s+='1';
    }
    cout<<endl;
    
    
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