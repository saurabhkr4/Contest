#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        ll count = 0;
        for(int k=0; k<min(n, m)/2; k++){
           string s = "";
        //    cout<<k<<" "<<endl;
           for(int i=k; k==m-i-1 || i<m-k-1; i++) {s+=v[k][i]; }//cout<<k<<" "<<i<<endl;}
           for(int i=k+1;  i<n-k-1; i++) {s+=v[i][m-k-1];} //cout<<i<<" "<<m-k-1<<endl;}
           for(int i=m-k-1; i>k; i--) {s+=v[n-k-1][i];} //cout<<n-k-1<<" "<<i<<endl;}
           for(int i=n-k-1; i>k; i--) {s+=v[i][k];} //cout<<i<<" "<<k<<endl;}

           ll len = s.size();
        //    cout<<len<<endl;
           for(int i=0; i<len; i++){
            if(s[i]=='1' && s[(i+1)%len]=='5' && s[(i+2)%len]=='4' && s[(i+3)%len]=='3') count++;
           }
        //    cout<<"Count = "<<count<<endl;
        //    cout<<s<<endl;
           s = "";
        }
        cout<<count<<endl;
        // for(auto i:v) cout<<i<<endl;
    }
    return 0;
}