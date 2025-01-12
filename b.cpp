#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int func(int i, int m, vector<int>&a){
    if(i<0) return 1;

    int ans = 0;
    for(int j=1; j<=m; j++){
        if(i-1>=0 && i+1<a.size() && abs(a[i-1]-j)<=1 && abs(a[i+1]-j)<=1)  return ans = (func(i-1, m, a)+ans)%mod;
        else if(i-1<0 && i>a.size()  )
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];



    return 0;

}