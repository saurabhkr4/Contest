#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0) {
            cout<<"-1"<<endl;
            continue;
        }
        else{
            ll sum = 0;
            vector<ll> prefixSum(n+1, 0);
            for(int i=1; i<=n; i++){
                prefixSum[i] = prefixSum[i-1] + i; 
            }
            // for(int i=1; i<=n; i++) cout<<prefixSum[i]<<" ";
            // cout<<endl;
            bool stat = true;
            for(int i=1; i<=n; i++){
                if(prefixSum[i]%(n+1)==0){
                // cout<<"-1"<<endl; 
                stat = false;
                break;
                }
            }
            
            if(stat){
                for(int i=1; i<=n; i++) cout<<i<<" ";
                cout<<endl;
            }
            else {cout<<"-1"<<endl;}
        }
        
    }
    
}
