class Solution {
public:
      
      void bfs (vector<vector<int>>isConnected,int src ,vector <bool>&visited)
      {
        queue<int>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
            int u =q.front();
            q.pop();
          for(int neighbours=0; neighbours<isConnected.size();neighbours++) 
           //for(int neighbours: isconnected[u])
            {
                if(visited[neighbours]==false && isConnected [u][neighbours]==1)
                {
                    q.push(neighbours);
                    visited[neighbours]=true;
                }
            }
        }

      }


    int findCircleNum(vector<vector<int>>& isConnected) {

        int n=isConnected.size();
        vector <bool> visited(n,false);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                bfs(isConnected,i,visited);
                count++;
            }
        }
        return count;
    }
};