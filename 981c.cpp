#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        a.push_back(-1);
        for(int i=1; i<=n; i++) cin>>a[i];

        for(int i=(n)/2-1; i>=1; i--){
            if(a[i]==a[i+1] || a[n-i]==a[n-i+1]) swap(a[i], a[n-i+1]);
        }

        ll ans = 0;
        for(int i=1; i<=n; i++){
            ans += (a[i]==a[i+1]);
        }

        cout<<ans<<endl;
    }
    return 0;
}