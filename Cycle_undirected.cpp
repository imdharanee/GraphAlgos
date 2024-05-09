bool hascycle(vector<int>adj[],int node,int vis[])
{
       queue<int>q;
       q.push(node);
       vis[node]=1;
       while(!q.empty()){
       for(auto &it:adj[node])
       {
             if(not(vis[it])) 
             {
                   q.push(it);
                   vis[it]=1;
             }
             else if(it!=node) return true;
       }
       }
       return false;
}