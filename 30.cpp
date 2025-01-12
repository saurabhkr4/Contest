#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	long long t;
	cin>>t;

	while(t--){
	    long long n;
	    cin>>n;
        string s;
        cin>>s;
        if(n<=2) {
            cout<<1<<endl;
            continue;}
        long long ab = 0, ba = 0;
        long long ans = 1;
        for(ll i=0 ;i<n-1; i++){
            if(s[i]=='a' && s[i+1]=='b') ab ++;
            else if(s[i]=='b' && s[i+1]=='a') ba++;
            if(ab==ba) ans = max(ans, i+2);
            cout<<ab<<" "<<ba<<" "<<ans<<endl;
        }
        long long maxsame = 0;
        cout<<endl;
        ll size = 1;
        for(ll i=0 ;i<n-1; i++){
            if(s[i]==s[i+1]) {
                size++;
                maxsame = max(maxsame, size);
            }
            else size = 1;
            cout<<size<<" "<<maxsame<<endl;
        }
        cout<<max(maxsame, ans)<<endl;
	}
	
	return 0;

}
