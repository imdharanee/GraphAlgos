 int find_mst_cost(vector<pair<int,int>>adj[])
 {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
       int vis[V]={0};int cost=0;
       q.push({0,0});
       while(!q.empty())
       {
           int node=q.top().second;
           int weight=q.top().first;
           q.pop();
           if(vis[node]==1)
             continue;
            cost+=weight;
            vis[node]=1;
            for(auto &it:adj[node])
            {
                  int adj_node=it[0];
                  int adj_node_weight=it[1];
                  if(!vis[adj_node])
                  {
                      q.push({adj_node_weight,adj_node});
                  }
                  
            }
       }
       return cost;
       
        
    }