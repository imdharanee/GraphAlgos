bool isEularCircuitExist(int v, vector<int>adj[]){
	    
	    vector<int>indegree(v,0);
	    int count=0;
	    for(int i=0;i<v;i++)
	    {
	        for(auto &it:adj[i]) indegree[it]++;
	    }
	    
	    for(int i=0;i<v;i++)
	    {
	          count+=(indegree[i]%2==1);
	    }
	    return count<=1;
	}

//every edge should be visited once..startand end with same vertex.
