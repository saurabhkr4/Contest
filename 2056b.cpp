#include <bits/stdc++.h>
using namespace std;
#define ll long long
void findTheTopoSort(int node, unordered_map<int, bool> &vis, vector<vector<int>>&adj, stack<int> &s){
    vis[node]= true;
    for (auto i: adj[node]){
        if(!vis[i]){
            findTheTopoSort(i, vis, adj, s);
        }
    }
   s.push(node);
    
    }

    // Function to return list containing vertices in Topological order.
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        unordered_map<int, bool> vis;
       stack<int> s;
        for (int i=0; i<adj.size(); i++){
            if(!vis[i]){
                findTheTopoSort(i, vis, adj, s);
                
            }
        }
     vector<int> ans;
     while(!s.empty()){
         int top= s.top();
         s.pop();
         ans.push_back(top);
         
     }
    //  for(int i: ans) cout<<i<<" ";
     return ans;
    }


int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<string> g(n);
        for(int i=0; i<n; i++){
            cin>>g[i];   
        }

        std::vector<std::vector<int>> adjMatrix(n);

        for (int i = 0; i <n; ++i) {
            for (int j =0; j <n; ++j) {

                if(g[i][j]=='1'){
                    int minm = min(i, j);
                    int maxm = max(i, j);
                    adjMatrix[minm].push_back(maxm);
                }
                
            }
        }

        vector<int> ans = topologicalSort(adjMatrix);
        for(int i: ans) cout<<i+1<<" ";
        cout<<endl;


        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=n; j++){
        //         cout<<adjMatrix[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    
}
