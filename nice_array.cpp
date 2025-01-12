#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++) cin>>a[i];
	    
	    ll pos_sum = 0, neg_sum = 0, pos_ext = 0, neg_ext = 0;
	    
	    for(int i=0; i<n; i++){
	        if(a[i]>=0) {
	            pos_sum += a[i]/k;
	            if(a[i]%k!=0) pos_ext++;
	        }else{
	            neg_sum += a[i]/k;
	            if(a[i]%k!=0) neg_ext++;
	        }
	    }
	    
	    ll out_sum = pos_sum + neg_sum;
	    // cout<<out_sum<<" "<<pos_sum<<" "<<neg_sum<<" "<<pos_ext<<" "<<neg_ext<<endl;

        if(out_sum==0) cout<<"YES"<<endl;
	    else if(out_sum>0){
	        if(out_sum-neg_ext<=0) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else{
	        if(out_sum+pos_ext>=0) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    
	}
    return 0;
}
