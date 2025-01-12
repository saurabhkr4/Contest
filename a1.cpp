#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll func(int a, int b){
    cout<<a<<" "<<b<<endl;
    if((a<0 || b<0)) return 1e9;
    if(a==b) return 0;
    ll m = 1e9;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            cout<<"i "<<i<<" j "<<j<<endl;
            for(int k=1; k<i; k++){
                m = min(func(i, j) , func(k, j) +  func(i-k, j)+1);
            }
            for(int k=1; k<j; k++){
                m = min(func(i, j) , func(i, k)  + func(i, j-k)+1);
            }
        }
    } 
    return m;
}

int main()
{
    int a, b;
    cin>>a>>b;
    ll m = 1e9;
    cout<<func(a, b)<<endl;
    return 0;
 
}