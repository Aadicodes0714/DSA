class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        /* // BRUTEFORCE APPROACH....
for(int i=0;i<n;i++)  // O(n)
{
    nums[i]*=nums[i];
}
sort(nums.begin(),nums.end());  // O(nlogn)


return nums;        // overall t.c -(O(nlogn))
*/

//2 POINTERS APPROACH...
//T.C-O(N)... S.C--(O(N))


vector <int> a ; // positive elements
vector <int > b;  //negative elements

for (int i=0;i<nums.size();i++)
{
if(nums[i]<0)
{
   b.push_back(nums[i]);
}
else {
    a.push_back(nums[i]);
}

}



int i=0;
int j=b.size()-1;
int idx=0;
vector<int>res(nums.size());

while(i<a.size() && j>=0)
{
    if(a[i]*a[i]<b[j]*b[j])
    {
        res[idx]=a[i]*a[i];
        idx++;
        i++;
    }
    else {
        res[idx]=b[j]*b[j];
        idx++;
        j--;
    }
}
while(i<a.size())
{
    res[idx]=a[i]*a[i];
    idx++;
    i++;
}
while(j>=0)
{
    res[idx]=b[j]*b[j];
    idx++;
    j--;
}
       return res;
    }
};