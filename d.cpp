#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){
	    int n;
	    cin>>n;
        int a[n];
        long long ans = 0;
        for(int i=0; i<n; i++) {cin>>a[i];
        // if(a[i]==0) ans++;
        }
        long long  sum = 0;
        int i = 0;
        
        while(i<n){
            // sum = a[i];
            int j = i;
            // cout<<"i=-->"<<i<<" "<<endl;
            while(j<n){
                sum += a[j];
                // cout<<"sum="<<sum<<" i="<<i<<" j="<<j<<endl;
                if(sum==0 || a[j]==0){
                    
                    // cout<<"aj"<<a[j]<<" ";
                    ans++;
                    i = j;
                    break;
                }
                j++;
            }
            sum = 0;
            i++;
        }
        // if(a[n-1]==0) ans++;
        cout<<ans<<endl;

        
	}
	
	return 0;

}
