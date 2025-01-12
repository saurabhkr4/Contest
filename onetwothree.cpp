#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++) cin>>v[i];
	    
	    for(int i=1; i<n-1; i++){
	        if(v[i-1]+v[i+1]==4){
	            if(v[i]>4-v[i]) v[i] = 4-v[i];
	        }
	    }
	    
	    long long sum = 0;
        for(int i: v) cout<<i<<" ";
        cout<<endl;
	    for(int i: v) sum += i;
	    cout<<sum<<endl;
	    
	}
    return 0;
}
