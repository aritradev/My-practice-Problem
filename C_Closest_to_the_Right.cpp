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
bool Check(int arr[],int n, int x){
    int low = 0 , high = n-1;
    while(low<=high){
        ll mid=(low+high)/2;
        if(arr[mid]==x){
            return 1;
        }
        if(arr[mid]<x){
            low=mid+1;
        }
        else high =mid-1;
    }
    return 0;
}

void solve()
{
    int n,q ; cin>>n>>q;
    int arr[n];
    for(auto &u:arr)cin>>u;
    while(q--){
        int a;
        cin>>a;
        //int upb =upper_bound(arr,arr+n,a)-arr;
        int lwb =lower_bound(arr,arr+n,a)-arr;
        //if(arr[lwb]!=a)cout<<0<<endl;
         cout<<lwb+1<<endl;
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