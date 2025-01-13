#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;
    
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        vector<int> v(n);

        ll sum = 0;
        for(int i=0; i<n; i++) {cin>>v[i]; sum += v[i];}
        
        int minm = sum-y;
        int maxm = sum-x;
        long long ans = 0;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(v[i]+v[j]>=minm && v[i]+v[j]<=maxm) ans ++;
            }
        }

        cout<<ans<<endl;
        //second commit
    }
    
}
