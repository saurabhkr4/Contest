#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){
	    string s;
        cin>>s;
        int q;
        cin>>q;
        while(q--){
            int i, r;
            cin>>i>>r;
            bool stat = false;

            s[i-1] = r+'0';
            for(int idx = i-4; idx<i+4; i++){
                if(idx>0 && idx<s.size()){
                    string ss ="";
                    for(int k=0; k<4; k++){
                        ss +=s[idx+k]+'0';
                    }
                    if(ss=="1100") {
                        stat = true;
                        break;
                    }
                    ss = "";
                }
            }

            if(stat) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
	}
	return 0;

}
