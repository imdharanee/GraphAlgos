vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int>dist(V,1e9);
        dist[S]={0};
        for(int i=0;i<V-1;i++)
        {
              for(auto &it:edges)
              {
                  int src=it[0];
                  int dest=it[1];
                  int weight=it[2];
                  if(dist[src]!=1e9 && dist[src]+weight<dist[dest])
                  {
                      dist[dest]=dist[src]+weight;
                  }
              }
        }
        for(auto &it:edges)
        {
            if(dist[it[0]]!=1e9 && it[2]+dist[it[0]]<dist[it[1]])   /// if there is a negative weight 
               return {-1};
        }
        return dist;
    }