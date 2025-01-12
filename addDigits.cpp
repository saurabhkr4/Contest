#include <bits/stdc++.h>
using namespace std;
#define ll long long

// void func(int n, int a, int b, vector<int> &v){
//     if(n<=0) {v.push_back(a); return;}
//     int x = a;
//     x *= 10;
//     // bool stat = false;
//     for(int i=0; i<=9; i++){
//         if((x+i)%b==0){ func(n-1, x+i, b, v);}
//     }
//     // if(stat==false) return;
// }

int main() {
	// your code goes here
    int a, b, n;
    cin>>a>>b>>n;
    for(int i=0; i<=9; i++){
        int x = a*10;
        if((x+i)%b==0){
            string ans = to_string(x+i);
            for(int k=0; k<n-1; k++) ans += '0';
            cout<<ans<<endl;
            return 0;
        }
    }

    cout<<"-1"<<endl;
	return 0;
}