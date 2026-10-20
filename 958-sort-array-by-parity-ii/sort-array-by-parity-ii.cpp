class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
          int n=nums.size();
          int even=0;
          int odd=1;

          while(even < n && odd < n)
          {
              if(nums[even]%2==0)
              {
                 even=even+2;
              }  
             else if(nums[odd]%2==1)
              {
                 odd=odd+2;
              }
              else
              {
                 int temp= nums[even];
                 nums[even]=nums[odd];
                 nums[odd]=temp; 
                 even =even+2;
                 odd=odd+2;
              }

          }

          return nums;
    }
};