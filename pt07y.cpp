//
//  pt07y.cpp
//  
//
//  Created by Gaurav Gulzar on 16/03/15.
//
//

#include <iostream>
using namespace std;
#include <cstring>
#include <vector>
#include <stack>
//typedef pair<int,int> ii;
//typedef vector<ii> vii;
typedef vector<int> vi;

bool istree(vector<vi> al,int n){
    stack<int> s;
    s.push(1);
    bool v[n+1];
    int par[n+1];
    memset(v,0,sizeof(bool)*(n+1));
    memset(par,0,sizeof(int)*(n+1));
    int u,sz;
    while(!s.empty()){
        u = s.top(); s.pop();
        sz = al[u].size(); v[u]=1;
        for(int i=0; i<sz; ++i){
            if(!v[al[u][i]]){
                s.push(al[u][i]);
                par[al[u][i]] = u;
            }
            else if(par[u] != al[u][i]) return false;
        }
    }
    
    for(int i=1; i<n+1; ++i)
        if(!v[i]) return false;
    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vi> adjList(n+1);
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    if(!istree(adjList,n))
        cout << "NO\n";
    else cout << "YES\n";
    return 0;
}
