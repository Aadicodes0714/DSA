class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
          int n=nums.size();
          int operation=0;
           sort(nums.begin(),nums.end());
           int left=0;
           int right=n-1;
           while(left<right)
           {
            if (nums[left]+nums[right]==k)
            {
                operation++;
                left++;
                right--;
            }
            else if( nums[left]+nums[right]<k)
            {
                left++;

            }
            else{
                right--;
            }
           }
return operation;
    }
};