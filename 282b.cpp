#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;
void print(vector<ll> &v){
    for(ll i: v) cout<<i<<" ";
    cout<<endl;
}
int main() {

    int n;
    cin>>n;

    vector<int> a(n), g(n);
    for(int i=0; i<n; i++){
        cin>>a[i]>>g[i];
    }

    int i = 0, j = 0;
    int count = 0;
    ll suma = 0, sumg = 0;
    string ans  = "";

    while(count<n && i<n){
        // cout<<suma<<" "<<sumg<<endl;
        if(abs(suma+a[i]-(sumg))<=500){
            suma += a[i];
            ans += 'A';
            count++;
        }
        else if(abs(suma-(sumg+(1000-a[i]))<=500)){
            sumg += (1000-a[i]);
            ans += 'G';
            count++;
        }
        i++;
        
    }

    if(count<n) cout<<"-1"<<endl;
    else cout<<ans<<endl;    

    return 0;    
}