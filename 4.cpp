#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){
	    long long n;
	    cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++) cin>>a[i];
        long long maxm = a[0];
        for(long long i=0; i<n; i++){
            maxm = (maxm, a[i]<<1);
        }
        // cout<<"maxm"<<maxm<<endl;
        long long ans = 0;
        // cout<<"intial ans "<<ans<<endl;
        for(long long x=1; x<=maxm; x++){
            bool stat = true;
            cout<<"x "<<x<<"-->>"<<endl;
            for(long long i=0; i<n; i++){
                // cout<<i<<" ";
                cout<<(x^a[i])<<" ";
                if((x^a[i])>=a[i]){
                    stat = false;
                    break;
                }
                
            }
            // cout<<endl;
            // cout<<stat<<" ";
            if(stat==true) ans++;
            // cout<<ans<<endl;
        }
        // cout<<endl;
        cout<<ans<<endl;
        // cout<<"-----"<<endl;
	}
	return 0;

}
