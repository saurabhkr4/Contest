#include <bits/stdc++.h>
using namespace std;

// bool comp(pair<char, int> a, pair<char, int> b){
//     return a.second<=b.second;
// }

int main(){

    int t;
    cin>>t;
    
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       vector<int> freq(26, 0);
       for(char i: s) freq[i-'a']++;
       int min_freq=1e9, max_freq=-1e9;
       char min_freq_char, max_freq_char;

       for(int i=0; i<26; i++){
        if(freq[i]>max_freq){max_freq=freq[i]; max_freq_char = 'a' + i;}
       }
       for(int i=0; i<26; i++){
        if(freq[i]<=min_freq && freq[i]!=0){min_freq=freq[i]; min_freq_char = 'a' + i;}
       }     

       for(int i=0; i<n; i++){
        if(s[i]==min_freq_char) {s[i] = max_freq_char; break;}
       }
        // cout<<min_freq_char<<" "<<max_freq_char<<endl;
       cout<<s<<endl;

    }
    
}
