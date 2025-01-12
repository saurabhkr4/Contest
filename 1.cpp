#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<vector<bool>> t(n+1, vector<bool>(1e6+1, false));
    vector<int> ans;

    for(int i=0 ;i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n+1; i++) t[i][0] = true;
    // t[0][0] = true;

    for(int i=1; i<n+1; i++){
        for(int j = 1; j<1e6+1; j++){
            t[i][j] = t[i-1][j];
            int prev_sum = j-v[i-1];
            if(prev_sum>=0 && t[i-1][prev_sum]) t[i][j] = true;
        }
    }

    for(int j = 1; j<1e6+1; j++){
        if(t[n][j]) ans.push_back(j);
    }

    cout<<ans.size()<<endl;
    for(int i: ans) cout<<i<<" ";
    cout<<endl;
    return 0;

}