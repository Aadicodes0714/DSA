

  //step-1)  generate adjacency list..
        //step-2) visited list banao usme restricted ko daalo....
        // step-3) call BFS...
        // int count =BFS(adj list , visited);
        // return count;

class Solution {
    public:
    int bfs(int src, vector<int> adjlist[],vector<bool> &visited)
    {
        queue<int>q;   //BFS ke liye queue...
        int count=1;   // source node bhi reachable hai...
        q.push(src);   // source node ko queue me daalo ...
        visited[src]=true;  // source ko visited mark karo ...

        while(!q.empty())
        {
            int u=q.front(); //queue ka front node nikalo ...
            q.pop();

            for (auto v : adjlist[u])
            // u ke har neighnour ko check karo

            //agar neighbour visited nahi hai aur restricted nhi hai ...

            {
                                  // v-> neighbour
                if(!visited[v])
                {
                    q.push(v);      // neighbour ko queue me dalo
                    visited[v]=true; //dubara visit hone se bachao.
                    count++;     // reachable nodes ki count badhao
                }

            }
        }

        return count;  //total reachable nodes return karo...
    }

int reachableNodes(int n , vector<vector<int>>&edges, 
                    vector<int>&restricted){

//step-1) adjacency list banao

vector<int> adj[n];

for(int i=0;i<edges.size();i++)
{
    adj[edges[i][0]].push_back(edges[i][1]);
    adj[edges[i][1]].push_back(edges[i][0]);
}

// step-2) sabhi nodes ko intially unvisited mark karo....

vector<bool> visited(n,false);

//step-3)restricted nodes ko visited mark kro....
//isse BFS in nodes parr nahi jaayega...


for(auto a:restricted)
{
    visited[a]=true;
}

//step-4) Node 0 se BFS  start karo... 
//Node 0 restricted nahi hai,isliye count =1 se start hoga

return bfs(0,adj,visited);

                    }
};


