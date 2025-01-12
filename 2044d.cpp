#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        unordered_set<ll> st;

        vector<ll> ans;

        for(int i=0; i<n; i++){
            if(st.find(v[i])==st.end()) {
                ans.push_back(v[i]);
                st.insert(v[i]);
            }
        }

        ll rem_size = n - ans.size();
        int i = 1;
        while(i<=n && rem_size>0){
            
            if(st.find(i)==st.end()){
                ans.push_back(i);    
                rem_size--;
            }

            i++;
                        
        }
        for(int i: ans) cout<<i<<" ";
        cout<<endl;
    }
    
}
