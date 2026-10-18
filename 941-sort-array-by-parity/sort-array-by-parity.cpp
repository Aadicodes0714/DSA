class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
     
        int left=0;
        int right=n-1;
        while(left < right )
        {
            if(nums[left]%2==0 )

            {
                left++; 
            }
            else if(nums[right]%2!=0)
            {
                  right--;
            }
           else 
           {
                int temp=nums[left];
                nums[left]=nums[right];
                nums[right] =temp;
           }
        }
return nums;

    }
};