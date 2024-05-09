 vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        vector<int>dist(V,INT_MAX);dist[S]=0;
        q.push({S,0});
        while(!q.empty())
        {
              int curr=q.top().first;
              int weight=q.top().second;q.pop();
              for(auto &it:adj[curr])
              {
                  int adj_vert=it[0];
                  int adj_vert_weight=it[1];
                  if(weight+adj_vert_weight<dist[adj_vert]){
                    dist[adj_vert]=weight+adj_vert_weight;
                    q.push({adj_vert,dist[adj_vert]});}
              }
        }
        return dist;
    }