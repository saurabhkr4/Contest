#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n, a, b, c;
        cin>>n>>a>>b>>c;
        long long x = n/(a+b+c);
        long long y = n%(a+b+c);
        // cout<<x<<" "<<y<<endl;
        if(y==0) cout<<3*x<<endl;
        else if(x*(a+b+c) + a >= n) cout<<3*x+1<<endl;
        else if(x*(a+b+c) + (a+b) >= n) cout<<3*x+2<<endl;
        else cout<<3*x+3<<endl;
    }
    
}
