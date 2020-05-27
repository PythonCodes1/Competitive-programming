class Solution {
public:
    
    bool dfs(vector<int> adj[],vector<bool>& vis,int color[],int s)
    {
        vis[s]=true;
        
        for(auto k:adj[s])
        {
            if(!vis[k])
            {
                color[k]=1-color[s];
                
                if(dfs(adj,vis,color,k)==false)
                return false;
            
            }
            else if(color[k]==color[s])
                return false;
        }
        
        return true;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        
        int n,m,i,j,a,b;
        n=dislikes.size();
        
        vector<int> adj[N+1];
        vector<bool> vis(N+1,false);
        int color[N+1];
        
        for(i=0;i<n;i++)
        {
            a=dislikes[i][0];
            b=dislikes[i][1];
            
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        for(i=1;i<=N;i++)
        {
            if(!vis[i])
            {   
                color[i]=0;
                if(dfs(adj,vis,color,i)==false)
                    return false;
            }
        }
        
        
        return true;
        
    }
};
