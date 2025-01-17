#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<pair<int, int>> coord(n);
        ll s = 0;
        for(int i=0; i<n; i++){
            cin>>coord[i].first;
            if(i>0) s += (m-coord[i].first);
            cin>>coord[i].second;
            if(i>0) s += (m-coord[i].second);
        }
        // cout<<"s ="<<s<<endl;
        cout<<4*n*m-2*s<<endl;
    }
    
}
