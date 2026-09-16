class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
               //brute forcle solution 

      for (int i=0; i<nums.size(); i++)  //O(n)
      {
        nums[i]=nums[i]*nums[i];

      }
      sort(nums.begin(),nums.end()); //O(nlogn)
      return nums;
     
    }
};