#include <bits/stdc++.h> 

//create a list
void preparelist(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges){
    //to avoid dupes we take a set inside a map instead of a vector
    for(int i=0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}
void bfs(unordered_map<int, set<int>> &adjList, vector<int>&ans, int node, unordered_map<int,bool> & visited){
    queue<int>q;
    q.push(node);
    
    visited[node]=1;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);
        
        for(auto x: adjList[frontnode]){
            if(!visited[x]){
                q.push(x);
                visited[x]=1;
            }
        }
    }  
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int,set<int>>adjList;
    preparelist(adjList, edges);
    
    //to record visited nodes/vertices
    unordered_map<int,bool>visited;
    vector<int>ans;
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adjList, ans, i, visited);
        }
    }
    return ans;
    
}
