#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;
void print(vector<ll> &v){
    for(ll i: v) cout<<i<<" ";
    cout<<endl;
}
int main() {


    ll x, y, n;
    cin>>x>>y>>n;
    if(x==0 && y==0) {
        cout<<0<<endl;
        return 0;
    }
    if(n<=1) {
        cout<<(x+mod)%mod<<endl;
        return 0;
    }
    // if(n==2) {cout<<y<<endl; return 0;}
    
    ll a, b=y, c=x;

    for(ll i=3; i<=n; i++){
        a = (b-c)%mod;
        c = b;
        b = a;       
    }

    if(b<0) cout<<(b+mod)%mod<<endl;
    else cout<<(b%mod)<<endl;
    return 0;    
}