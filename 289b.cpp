#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;
void print(vector<ll> &v){
    for(ll i: v) cout<<i<<" ";
    cout<<endl;
}
int main() {

    ll n, m, d;
    cin>>n>>m>>d;
    vector<ll> v(n*m);
    for(ll i=0; i<n*m; i++) cin>>v[i];
    sort(v.begin(), v.end());

    ll median = v[n*m/2];
    ll count = 0;
    for(ll i=0; i<n*m; i++){
        if(abs(v[i]-median)%d!=0) {
            cout<<"-1"<<endl;
            return 0;
        }else{
            count += (abs(v[i]-median)/d);
        }
    }
    cout<<count<<endl;
    return 0;    
}