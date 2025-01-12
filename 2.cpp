#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n+1];
	    for(int i=0; i<n+1; i++) cin>>a[i];
	    sort(a, a+n);
	    for(int i=0; i<n+1; i++) cout<<a[i]<<" ";
        cout<<endl;
	    int i = 0;
	    int j = n;
	    
	   // for(int i=n-1; i>=0; i--){
	   //     if(a[i]<= 2*a[n] && a[n]<a[i]) swap(a[i], a[n]);
	   //    // else break;
	   // }
	   
	   while(i<n){
	       if(i<n && a[i]<=2*a[n]){
	           i++;
	       }
           cout<<"i-->"<<i<<" ";
           cout<<endl;
	       if(i<n+1 && i>0){cout<<a[i]<<" "<<a[n]<<endl; 
        //    int t = a[i];
        //    a[i] = a[n];
        //    a[n] = t;
           swap(a[i], a[n]);
        cout<<"Swapped"<<a[i]<<" "<<a[n]<<endl;
           }
	       i++;
	   }
	    
	    int sum = 0;
	    for(int i=0; i<n; i++) sum += a[i];
        for(int i=0; i<n+1; i++) cout<<a[i]<<" ";
        cout<<endl;
	    cout<<sum<<endl;
	    
	}

}
