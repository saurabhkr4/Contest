#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int n;
    cin>>n;
    vector<int> v(n);
    vector<ll> sumArray(n+1, 0);
    ll sum = 0;
    ll ans = 0, count = 0;

    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }

    if(sum%3!=0) {
        cout<<"0"<<endl;
        return 0;
    }
    sum /= 3;
    
    for(int i=0; i<n-1; i++){
        sumArray[i+1] = sumArray[i] + v[i];
        if(sumArray[i+1]==sum*2) ans += count;
        if(sumArray[i+1]==sum) count++;
        
    }

    cout<<ans<<endl;
    return 0;
}
