class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

      unordered_set <int>s;
      int i=0;
      int j=0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
      while(i<n && j<m)
      {
        if(nums1[i]==nums2[j])
        {
            s.insert(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j])
        {
            i++;
        }
        else 
        {
            j++;
        }
      }

      vector<int>result;
     
      for(int ans:s)
      {
        result.push_back(ans);
        
      }

      return result;
    }
};