#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<ll> &v){
    for(ll i: v) cout<<i<<" ";
    cout<<endl;
}
int main() {


    ll n;
    cin>>n;

    vector<ll> a(n),  b(n);
    vector<ll> freq(1001, 0);

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    
    for(int i=0; i<n; i++){
        freq[b[i]]++;
    }
    // print(a);
    // print(b);
    // print(freq);
    ll count = 0;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            if(freq[a[i]]<=0) count++;
        }else{
            if(freq[a[i]]<=1) count++;
        }
    }
    // print(freq);
    cout<<count<<endl;


    
    return 0;    
}