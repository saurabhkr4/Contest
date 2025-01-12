#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<ll> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        bool stat1 = true;

        for(int i=0; i<n; i++){
            if(a[i]!=i+1){ stat1 = false; break;}
        }

        bool stat = true;

        int i = 0;
        while(i<n){
            cout<<a[i+1]-a[i]<<endl;
            if(a[i+1]-a[i]!=1){
                stat = false;
                break;
            }else{
                i++;
            }
        }

        if(stat1 || stat) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;    
}