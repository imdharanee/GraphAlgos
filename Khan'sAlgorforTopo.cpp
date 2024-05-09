

vector<int>topo(vector<int>adj[],int indegree[])
{
      vector<int>res;
      for(int i=0;i<v;i++)
        if(indegree[i]==0) q.push(i),res.push_back(node);

      while(!q.empty())
      {
              auto node=q.front();
              res.push_back(node);
              q.pop();
              for(auto &it:adj[node])
              {
                     if(indegree[it]>0){
                     indegree[it]--;
                     if(!indegree[it]) q.push(it);}
              }

      }
      return res;
}