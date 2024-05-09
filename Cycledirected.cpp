bool hascycle(vector<int>adj[],int src,int vis[])
{
       vis[src]+=2;
       for(auto &it:adj[src])
       {
                 if(not(vis[it])){
                    vis[it]+=2;
                    if(hascycle(adj,it,vis)) return true;}
                 else if(vis[it]==2) return true;
       }
       vis[src]--;
       return false;
}