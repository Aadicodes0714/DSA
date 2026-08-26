class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector <int>ans;
       int n=nums.size();
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                 ans.push_back(j);
                 break;
            }
          }
        }
        return ans;
       // HASH MAP.....
        /*
        vector <int>ans;
        map<int,int>mp;
         for(int i=0;i<nums.size();i++){
            int t=target- nums[i];
            if(mp.find(t) != mp.end()) {
             ans.push_back(mp[t]);
             ans.push_back(i);
             break;   
            }
            mp[nums[i]]=i;
         }
        return ans;
        */
    }
};