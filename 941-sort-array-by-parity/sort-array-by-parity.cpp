class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
     
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
             swap(nums[left],nums[right]); //  int temp=nums[left];      
                left++;                    //nums[left]=nums[right];   
                 right--;                  //nums[right] =temp;        
           }
        }
return nums;

    }
};