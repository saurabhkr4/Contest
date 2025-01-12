#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){
	    int n;
	    cin>>n;
        // int ans = 0;
		int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        long long ans = 0;

        for(int i=n-1; i>=0; i--){
            int x = i, y = 0;
            int minm = 1e9;
            while(x<n && y<n){
                // cout<<a[x][y]<<" ";
                minm = min(minm, a[x][y]);
                x++;
                y++;
            }
            // cout<<endl;
            // cout<<"minm is"<< minm<<endl;
            if(minm<0) ans  += ((-1)*minm);
            minm = 1e9;
        }

        for(int i=1; i<n; i++){
            int x = 0, y = i;
            int minm = 1e9;
            while(x<n && y<n){
                // cout<<a[x][y]<<" ";
                minm = min(minm, a[x][y]);
                x++;
                y++;
            }
            // cout<<endl;
            // cout<<"minm is"<< minm<<endl;
            if(minm<0) ans  += ((-1)*minm);
            minm = 1e9;
        }

        cout<<ans<<endl;


	}
	
	return 0;

}
