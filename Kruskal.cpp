


//Task: Visit every vertices with minimum cost;
//edges{{u,v,cost}...}
int krukal_mst_weight(vector<vector<int>>&edges)
{
        sort(edges.begin(),edges.end(),[&](auto &a,auto &b)           sort the edges based on weight;
        {
              return a[2] < b[2];
        });


for(auto &it:edges)
{
        int u=it[0];
        int v=it[1];
        int c=it[2];
        apply dsu for checking if there is a cycle if {u and v} is added. 
        If there isnt a cycle 
        {
              res_cost+=c;
        }
        
}
return res_cost;
}