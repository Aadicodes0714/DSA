class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     //j ne new element dhunda → i ko aage lao → new element ko i wali position par daal do.

     int i=0;
     for (int j=i+1;j<nums.size();j++)
     {

        if (nums[j]!=nums[i]){
            i++;
            nums[i]=nums[j];
        }
     }

     return i+1;
    }
};