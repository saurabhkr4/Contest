#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        ll sum = 0;
        vector<ll> prefixSum(n+1, 0);
        vector<ll> last(n+1);
        map<ll, ll> m;
        m[0] = 0;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            sum += x;
            prefixSum[i] = sum;
            if(m.find(sum)==m.end()){
                last[i] = -1;
            }else{
                last[i] = m[prefixSum[i]];
            }
            m[sum] = i;
        }
        
        // for(int i: prefixSum) cout<<i<<" ";
        // cout<<endl;
        // for(int i: last) cout<<i<<" ";
        // cout<<endl;
        // for(auto i: m) cout<<i.first<<" "<<i.second<<endl;
        // cout<<endl;      

        vector<ll> dp(n+1, 0);
        // ll sum = 0;
        for(int i=1; i<=n; i++){
            dp[i] = dp[i-1];
            if(last[i]!=-1) dp[i] = max(dp[i-1], 1+dp[last[i]]);
        }  
        // for(int i: dp) cout<<i<<" ";
        // cout<<endl;
        cout<<*max_element(dp.begin(), dp.end())<<endl;
    }
    return 0;
}