#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(ll &i: v) cin>>i;
    sort(v.begin(), v.end());
    ll mid = v[n/2];
    ll ans = 0;
    for(ll &i: v) ans += abs(i-mid);
    cout<<ans<<endl;
    return 0;
 
}