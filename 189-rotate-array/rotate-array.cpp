class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        //SIMPLE APPROACH....
/*
        for(int j = 0; j < k; j++)
{
    int last = nums[nums.size()-1];

    for(int i = nums.size()-1; i > 0; i--)
    {
        nums[i] = nums[i-1];
    }

    nums[0] = last;
}
*/


//REVERSE APPROACH...
        int n=nums.size();

k = k% n;

reverse(nums.begin(),nums.end());
reverse(nums.begin(),nums.begin()+k);
reverse(nums.begin()+k,nums.end());


    }
};