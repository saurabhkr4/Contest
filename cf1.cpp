#include <bits/stdc++.h>
using namespace std;
#define ll long long
char to_char(int n){return n +'0';}
int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){
	    int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int> (m, 0));
        for(int i=0; i<n; i++){
            int num;
            cin>>num;
            int r;
            int index = m-1;
            while(num){
                r = num%10;
                mat[i][index] = r;
                index--;
                num = num/10;
            }
        }
        int si=0, sj=0, ei=n, ej=m;
        string s = "";
        while(si<=ei && sj<=ej){
            cout<<si<<" "<<sj<<" "<<ei<<" "<<ej<<endl;
            // for(int i=sj; i<ej; i++) {s+= to_char(mat[si][i]); cout<<"f "<<i<<endl;}
            // for(int i=si+1; i<ei; i++) {s+= to_char(mat[i][ej]); cout<<"s "<<i<<endl;}
            // for(int i=ej-1; i>=sj; i--) {s+= to_char(mat[ei][i]); cout<<"t "<<i<<endl;}
            // for(int i=ei-1; i>si; i--)  {s+= to_char(mat[i][sj]); cout<<"fo "<<i<<endl;}
            fo(int i=si; i<sj; i++){
                for(int j=sj; j<ej; j++){
                    if(i==)
                }
            }
            cout<<s<<endl;
            ei--;
            ej--;
            si++;
            sj++;
            s = "";
        }
        
        for(auto i: mat){
            for(auto j: i) cout<<j<<" ";
            cout<<endl;
        }
        
	}
	return 0;

}
