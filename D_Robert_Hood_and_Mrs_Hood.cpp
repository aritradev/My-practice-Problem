#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,k;
        cin>>n>>d>>k;
        //vector<int>v(n+2,0);
        int l,r;
        map<int,int>start,end;
        while(k--){
            cin>>l>>r;
            start[l]++;
            end[r]++;
        }
        int mom=0,conv=0,bro=0,momind=1,broind=1;

        for(int i=1; i<=d; i++){
            if(start.find(i)!=start.end()){
                conv+=start[i];
            }
        }
        mom=bro=conv;
        //cout<<conv<<" ";
        for(int i=2; i<=n-d+1; i++){
            if(start.find(i+d-1)!=start.end()){

                conv+=start[i+d-1];
            }
            if(end.find(i-1)!=end.end()){
                conv-=end[i-1];
            }
            //cout<<conv<< " ";
            if(conv>bro){
                bro=conv;
                broind=i;
            }
            if(mom>conv){
                mom=conv;
                momind=i;
            }
        }
        //cout<<endl;
        cout<<broind<<" "<<momind<<endl;
    }
}