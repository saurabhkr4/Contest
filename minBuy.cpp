#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<pair<int, int>> a(n);
        vector<ll> v(n);

        for(int i=0; i<n; i++) cin>>a[i].first;
        for(int i=0; i<n; i++) cin>>a[i].second;
        for(int i=0; i<n; i++) v[i] = a[i].first*a[i].second;

        int amount = x;
        int i = 0;
        sort(v.begin(), v.end(), greater<int>());
        // for(auto i  : a) cout<<i.first<<" "<<i.second<<endl;
        long long count = 0;
        
        while(i<n && amount>0){
            
            amount -= v[i];
            count++;
            i++;
        }
        
        if(amount>0) cout<<"-1"<<endl;
        else cout<<count<<endl;
        
        
    }
}
