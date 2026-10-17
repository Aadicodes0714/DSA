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

           int sum=nums[left]+nums[right];
            if (sum==k)
            {
                operation++;
                left++;
                right--;
            }
            else if(sum<k)
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