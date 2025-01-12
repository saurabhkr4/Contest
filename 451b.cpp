#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<ll> &v){
    for(ll i: v) cout<<i<<" ";
    cout<<endl;
}
int main() {


    ll n;
    cin>>n;

    vector<ll> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    ll l = -1;
    ll r = n;

    for(int i=0; i<n-1; i++){
        if(a[i+1]<a[i]) {
            l = i;
            break;
        }
    }

    for(int i=n-1; i>0; i--){
        if(a[i-1]>a[i]){
            r = i;
            break;
        }
    }

    if(l==-1 && r==n){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    // cout<<"index "<< l<<" "<<r<<endl;
    // print(a);
    reverse(a.begin()+l, a.begin()+r+1);
    // print(a);
    for(int i=0; i<n-1; i++){
        if(a[i+1]<a[i]){
            cout<<"no"<<endl;
            return 0;
        }
    }

    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
    
    return 0;    
}