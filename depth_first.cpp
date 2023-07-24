#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> res;
void dfs(int adj[][],int n,int st,map<int,bool> vis)
{
    map<int,bool> ch(n,true);
    if(!vis[st])
    {
        vis[st] = true;
        res.push_back(st);
    }
    for(int i = 0;i<n;i++)
    {
        if(adj[st][j]==1)
            dfs(adj,n,j,vis);
    }
    if(ch==vis)
        return;
} 

