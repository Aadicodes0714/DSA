class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {


        //TWO POINTER APPROACH...
        
         vector <vector<int>> res;
         sort(nums.begin (), nums.end());

        for (int i=0;i<nums.size()-2;i++){  
             

            if(i>0 &&   nums[i]==nums[i-1])
            {
                continue;
            }  
                
      int left=i+1;
     int sum= -1 * nums[i];
        int right =nums.size()-1;

        while(left <right)
        {
       int s=nums[left]+nums[right];
       if(s==sum)
       {
        res.push_back({nums[i],nums[left],nums[right]});
        left ++;
        right --;
        while (left < right && nums[left]==nums[left -1])
        {
            left ++;

        }
        while ( left < right  && nums[right]==nums[right+1])
        {
            right--;
        }
       }

       else if(s<sum)
       {
        left ++;
       }

       else 
       {
        right--;
       }

        }

        }

return res;



// BRUTEFORCE ....TLE...
/*
set<vector<int>> s;
for (int i=0;i<nums.size();i++)
{
    for (int j=i+1;j<nums.size();j++)
    {
        for(int k=j+1;k<nums.size();k++)

        {
            if (nums[i]+nums[j]+nums[k]==0){
        vector <int> temp={nums[i],nums[j],nums[k]};
        sort(temp.begin(),temp.end());
        s.insert(temp);

            }
        }

    }
}
vector<vector<int>> res(s.begin(),s.end());
return res;
*/

// using hashset... TLE...

/*
set<vector<int>> s;
for (int i=0;i<nums.size();i++)
{
    set<int>hashset;
    for (int j=i+1;j<nums.size();j++)
    {
int third =-(nums[i]+nums[j]);
if(hashset.find(third)!=hashset.end())
{
    vector<int > temp= {nums[i],nums[j],third};
    sort(temp.begin(),temp.end());
    s.insert(temp);
}
hashset.insert(nums[j]);
    }
}
    vector<vector<int>> res(s.begin(),s.end());
return res;
*/
    }
};