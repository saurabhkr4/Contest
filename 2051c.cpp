#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int rem = n-k;
        vector<int> left(m);
        vector<int> known(k);
        vector<bool> mp(n+1, false);
        for(int i=0; i<m; i++) cin>>left[i];
        for(int i=0; i<k; i++) {cin>>known[i]; mp[known[i]]=true;}
        
        string ans = "";
        
        for(int i=0; i<m; i++){
            if(rem==0) ans += '1';
            else if(rem==1 && mp[left[i]]==false){
                ans += '1';
                //rem--;
            }else if(rem>=1){
                ans += '0';
                //rem--;
            }
        }
        cout<<ans<<endl;

        //second commit
    }
    
}
