#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check1100(string &s, int i){
    
    int n = s.size();
    if(i<0) return false;
    if(i>n-4) return false;
    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0') return true;
    return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){
	    string s;
        cin>>s;
        int n = s.size();
        ll count = 0;
        for(int i=0; i<n; i++){
            count += check1100(s, i);
        }
        // cout<<count<<endl;
        int q;
        cin>>q;
        while(q--){
            ll i, v;
            cin>>i>>v;
            i--;
            if(s[i]!=v+'0'){
                int before, after = 0;
                before = check1100(s, i) || check1100(s, i-1) || check1100(s, i-2) || check1100(s, i-3);
                s[i] = v + '0';
                after = check1100(s, i) || check1100(s, i-1) || check1100(s, i-2) || check1100(s, i-3);
                // cout<<"before "<<before<<" after "<<after<<endl;
                count += (after-before);
            }
            if(count>0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
	}
	return 0;
}
