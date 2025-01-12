#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	vector<int> arr(201);
	int x = 0;
	arr.push_back(0);
	for(int i=1; i<=200; i++){
		if(i%2==1) arr[i] = (arr[i-1]-(2*i-1));
		else arr[i] = (arr[i-1]+(2*i-1));
	}
	// for(int i: arr) cout<<i<<" ";
	// cout<<endl;
	while(t--){
	    int n;
	    cin>>n;
		int i = 0;
		while(i<arr.size()){
			if(arr[i]>n || arr[i]<-n){
				if(i%2==1) cout<<"Sakurako"<<endl;
				else cout<<"Kosuke"<<endl;
				break;
			}
			i++;
		}
		if(i!=arr.size()) continue;
        
	}
	
	return 0;

}
