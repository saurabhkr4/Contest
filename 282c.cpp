#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	string a, b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<"NO"<<endl;
        return 0;
    }else{
        int i=0,j = 0;
        int n = a.size();
        while(i<n && a[i]=='0') i++;
        while(j<n && b[j]=='0') j++;
        if( (i<n && j<n) || (i==n && j==n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
    return 0;
}
