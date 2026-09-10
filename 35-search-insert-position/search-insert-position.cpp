class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int n=nums.size();
     if(target < nums[0])
     {
        return 0;
     }
     if(target>nums[n-1])
     {
        return n;
     }
     int low=0;
     int high =nums.size();
     int res=0;
     
     while(low<=high){

        int mid=(low+high)/2;
        if(nums[mid]==target)
     {
        return mid;
     }
         if (nums[mid]<target)
        {
            res = mid;
            low = mid+1;
        }
        if (nums[mid]>target)
        {
            high=mid-1;

        }

     }
         return res+1;
    } 
};