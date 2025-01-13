#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool func(long long n){
    long long x = sqrt(n);
    if(x%2==0) return false;
    return x*x==n;
}

int main(){

    int t;
    cin>>t;
    
    while(t--){
       int n;
       cin>>n;
       vector<int> a(n);

       for(int i=0; i<n; i++) cin>>a[i];
       ll sum = 0;
       ll count = 0;
       for(int i=0; i<n; i++){
            sum += a[i];
            if(func(sum)) count++;
       }
        cout<<count<<endl;
    }
    
}
