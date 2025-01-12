#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	// your code goes here
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    vector<int> c(1001, 0);

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++) c[a[i]]++;
    for(int i=0; i<n; i++){
        // cout<<a[i]<<" "<<b[i]<<endl; 
        if(a[i]!=b[i] || c[b[i]]<0
        ) {c[b[i]] = -2;}
    }

    // for(int i: a) cout<<i<<" ";
    // cout<<endl;

    int count = 0;

    for(int i=0; i<1001; i++){
        // cout<<c[i]<<" ";
        if(c[i]>0) count+=c[i];
    }
    cout<<count<<endl;
	return 0;
}