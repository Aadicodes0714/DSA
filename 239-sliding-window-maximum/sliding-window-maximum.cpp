class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

      //APPROACH-1 ....

      priority_queue <pair<int,int>>pq; //max priority queue by default...
      vector<int> result;
      int n=nums.size();
      for(int i=0; i<n;i++) 
      // remove the max elements which are out of window size..
      {
          while(!pq.empty() && pq.top().second<=i-k)
            
                pq.pop();
                pq.push({nums[i],i}); //we will always find the max element 
                                     // at top...
                 if(i>=k-1)
                    result.push_back(pq.top().first);
      }
return result;
    }
};

      

        
