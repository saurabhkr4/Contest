#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;

        ll sum = 0;
        ll two = 0;
        ll three = 0;

        for(char i : s){
            sum += (i-'0');
            if(i=='2') two++;
            if(i=='3') three++;
        }
        // cout<<sum<<" "<<two<<" "<<three<<endl;
        // if(sum%9==0){cout<<"YES"<<endl; continue;}

        // if((sum+2)%9==0){
        //     if(two>=1){cout<<"YES"<<endl; continue;}
        // }
        // else if((sum+4)%9==0){
        //     if(two>=2){cout<<"YES"<<endl; continue;}
        // }
        // else if((sum+6)%9==0){
        //     if(three>=1){cout<<"YES"<<endl; continue;}
        // }
        // else if((sum+8)%9==0){
        //     if(two>=4 || (two>=1 && three>=1)){cout<<"YES"<<endl; continue;}
        // }

        // cout<<"NO"<<endl;
        ll x = sum;
        bool stat = false;

        for(int i=0; i<=two; i++){
            for(int j=0; j<=three; j++){
                if((x+i*2+j*6)%9==0){stat = true;}
            }
        }

        if(stat) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

	}
    return 0;
}
