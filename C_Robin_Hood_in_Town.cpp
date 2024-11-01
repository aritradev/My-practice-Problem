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
    int n ;cin>>n;
    vector<int>v(n);
    ll sum= 0 ;
    for(auto &u:v ){cin>>u;sum+=u;}
    sort(v.begin(),v.end());
    if(n<=2){cout<<-1<<endl;return;}
    
    ll l =0,r=1e12,ans=-1;
    while(l<=r){
        ll mid= (l+r)/2;
        ll nsum=mid+sum;
        double avg = (double) nsum/(2.0*n);
        ll unha=0;
        for(int i = 0 ; i < n;i++){
            if(v[i]<avg)unha++;
        }
        if(unha>n/2){
            ans = mid ;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
    
    



    
    
    
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