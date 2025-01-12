#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    vector<string> v(n);

        for(int j=0; j<n; j++){
            cin>>v[j];
        }

        int j = 0;
        ll count = 0;
        ll len = 0;

        while(j<n){
            // cout<<j<<" "<<len<<endl;
            if(len+v[j].size()<=m){len+=v[j].size(); count++;}
            else break;
            j++;
        }
	    
        cout<<count<<endl;

	}
    return 0;
}
