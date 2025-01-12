#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;
    
    while(t--){

        string s;
        cin>>s;
        string a = s;
        string ans = "";
        int n = s.size();
        reverse(a.begin(), a.end());

        for(int i=0; i<n; i++){
            if(a[i]=='p') ans += 'q';
            else if(a[i]=='q') ans += 'p';
            else if(a[i]=='w') ans += 'w';
        }

        cout<<ans<<endl;
        
    }
    
}
