class Solution {
public:
    int maxProduct(vector<int>& nums) {

/*
int n =nums.size();
 sort(nums.begin(),nums.end());
 return ((nums[n-1]-1)*(nums[n-2]-1));
*/

int n=nums.size();
int ans=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        int product = (nums[i]-1)*(nums[j]-1);
        ans=max(ans,product);

    }

}
return ans;
/*
int n=nums.size();
int first=0;
int second=0;

for(int i=0;i<n;i++)
{
    if(nums[i]>first)
    {
        second =first;
        first=nums[i];

    }

    else if(nums[i]>second)
    {
        second=nums[i];
    }
}
return (first -1)*(second-1);
*/ 




    }
};