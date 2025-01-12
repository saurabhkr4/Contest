#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;
    
    while(t--){

        long long m, a, b, c;
        cin>>m>>a>>b>>c;

        long long count = 0;
        long long seat_a = 0, seat_b=0;

        if(m>a) {count += a; seat_a = m-a;}
        else {count += m; seat_a = 0;}

        if(m>b) {count += b; seat_b = m-b;}
        else {count += m; seat_b = 0;}
        
        count += min(seat_a+seat_b, c);

        cout<<count<<endl;
        
    }
    
}
