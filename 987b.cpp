#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;
void print(vector<ll> &v){
    for(ll i: v) cout<<i<<" ";
    cout<<endl;
}
int main() {


    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin>>v[i];
        for(ll i=0; i<n-1; i++){
            if(v[i]==v[i+1]+1) swap(v[i], v[i+1]);
        }
        bool stat = true;
        for(ll i=0; i<n-1; i++){
            if(v[i+1]<v[i]){
                stat = false;
                break;
            }
        }
        if(stat) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;    
}