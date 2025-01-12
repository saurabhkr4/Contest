#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll func(int a, int b, vector<vector<ll>> &t){
    // cout<<a<<" "<<b<<endl;
    // if(a>b) swap(a, b);
    if(t[a][b]!=1e9) return t[a][b];
    if(a==b) return t[a][b]= 0;
    if(a==1) return t[a][b]= b-1;
    if(b==1) return t[a][b]= a-1;
    for(int i=1; i<a; i++) t[a][b] = min(t[a][b], 1 + func(i, b, t) + func(a-i, b, t));
    for(int j=1; j<b; j++) t[a][b] = min(t[a][b], 1 + func(a, j, t) + func(a, b-j, t));
    return t[a][b];
}

int main(){
    int a, b;
    cin>>a>>b;
    vector<vector<ll>> t(501, vector<ll>(501, 1e9));
    cout<<func(a, b, t)<<endl;
    return 0;
}