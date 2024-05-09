bool dfs(int node,vector<int>adj[],vector<int>& vis,int count,int n)
    {
        if(count==n-1)
          return true;
        vis[node]=1;
        for(auto &it:adj[node])
        {
            if(!vis[it] and dfs(it,adj,vis,count+1,n))              //visit every vertex exactly once
              return true;
        }
        vis[node]=0;
        return false;
    }
    