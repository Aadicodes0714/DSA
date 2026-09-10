class Solution {
    /*
public:
    void rotate(vector<int>& nums, int k) {

        //SIMPLE APPROACH....

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

/*
//REVERSE APPROACH--> using STL libraries....

        int n=nums.size();

k = k% n;

reverse(nums.begin(),nums.end());
reverse(nums.begin(),nums.begin()+k);
reverse(nums.begin()+k,nums.end());

 }
};

*/

// REVERSE APPROACH --> WITHOUT USING STL libraries...


public:

    void reverse ( vector<int>&nums,int left ,int right){
  while(left<right){
    int temp=nums[left];
    nums[left]=nums[right];
    nums[right]=temp;
    left++;
    right--;
    }

}
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();

k = k% n;

reverse(nums,0,n-1);
reverse(nums,0,k-1);
reverse(nums, k, n-1);


    }
};