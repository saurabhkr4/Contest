#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<ll> h(n);
        for(int i=0; i<n; i++) cin>>h[i];

        // if(n==1){
        //     cout<<0<<endl;
        //     continue;
        // }

        unordered_map<ll, ll> m;
        ll maxFreq = 0;

        for(int i=0; i<n; i++){
            m[h[i]]++;
        }

        for(auto i: m){
            maxFreq = max(maxFreq, i.second);
        }

        cout<<n-maxFreq<<endl;
    }
    return 0;    
}