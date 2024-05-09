#include<bits/stdc++.h>
using namespace std;


class Disjoint
{
    public:
        vector<int>rank,parent;
        Disjoint(int v)
        {
               rank.resize(v);
               parent.resize(v);
               for(int i=0;i<v;i++) parent[i]=i;
        }
        int findtopparent(int node)
        {
            if(node==parent[node])
               return parent[node]=node;
            return parent[node]=findtopparent(parent[node]);
        }
        public:bool unionbyrank(int u,int v)
        {
        
                int top_u=findtopparent(u);
                int top_v=findtopparent(v);
                if(top_u==top_v) return false;
                
                if(rank[top_u] < rank[top_v])
                {
                       parent[top_u]=top_v;
                }
                else if(rank[top_u] > rank[top_v])  parent[top_v]=top_u;
                else
                {
                        parent[top_u]=top_v;
                        rank[top_v]++;
                }
                return true;
                
        }

        public:bool unionbysize(int u,int v)
        {
                int top_u=findtopparent(u);
                int top_v=findtopparent(v);
                if(top_u==top_v) return false;

                if(size[top_u] < size[top_v])
                   {
                        parent[top_u]=top_v;
                        size[top_u]+=size[top_v];
                   }
                   else
                   {
                        parent[top_v]=top_u;
                        size[top_v]+=size[top_u];
                   }
                   return true;
        }
};
