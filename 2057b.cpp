#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> a(n);
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){ 
            cin>>a[i];
            mp[a[i]]++;
        }

        vector<int> freq;
        for(auto i: mp){
            freq.push_back(i.second);
        }

        sort(freq.begin(), freq.end());
        int rem = k;
        long long ans = 0;

        for(int i=0; i<freq.size(); i++){
            if(rem-freq[i]>=0)  rem -= freq[i];
            else ans++;
        }        
        if(ans==0) ans++;
        cout<<ans<<endl;

    }
    
}
