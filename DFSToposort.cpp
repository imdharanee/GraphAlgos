
	void dfs(int node,vector<int>adj[],int vis[],vector<int>&res)
	{
	    vis[node]=1;
	    
	    for(auto &adj_node:adj[node])
	    {
	        if(!vis[adj_node])
	          dfs(adj_node,adj,vis,res);
	    }
	    res.push_back(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
                vector<int>res;
	    int vis[V]={0};
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	          dfs(i,adj,vis,res);
	    }
	    std::reverse(res.begin(),res.end());
	    return res;
	}
