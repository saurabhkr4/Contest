#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;
    
    while(t--){
       int n;
       cin>>n;
       vector<int> a(n), b(n);

       for(int i=0; i<n; i++) cin>>a[i];
       for(int i=0; i<n; i++) cin>>b[i];
       long long count = 0;

       for(int i=0; i<n; i++){
        if(a[i]<b[i]) count++;
       }

       if(count>1) cout<<"NO"<<endl;
       else if(count == 0) cout<<"YES"<<endl;
       else{

        int idx = -1;
        int diff = 0;
        for(int i=0; i<n; i++){
            if(a[i]<b[i]) {
                idx = i;
                diff = b[i]-a[i];
                break;
            }
        }
        bool stat = true;
        for(int i=0; i<n; i++){
            if(i!=idx){
                if(a[i]-b[i]<diff){
                    stat = false;
                    break;
                }
            }
        }
        if(stat) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       }
        
       
    }
    
}
