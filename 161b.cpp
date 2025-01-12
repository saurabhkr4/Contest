#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        
        int maxm = INT_MIN;
        int maxm_idx = 0;
        
        for(int i=0; i<n; i++){
            if(max(a[i], b[i])>=maxm){
                if(max(a[i], b[i])==maxm){
                    if(a[i]>a[maxm_idx]) maxm_idx = i;
                }else{
                    maxm = max(a[i], b[i]);
                    maxm_idx = i;
                }
                
            }

        }
        
        int maxm_bob = INT_MIN;
        int maxm_bob_idx = -1;

        for(int i=0; i<n; i++){
            if(a[i]>maxm_bob && i!=maxm_idx){
                maxm_bob = a[i];
                maxm_bob_idx = i;
            }
        }        

        maxm_bob = max(a[maxm_bob_idx], b[maxm_bob_idx]);
        if(maxm>maxm_bob) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
    
}
