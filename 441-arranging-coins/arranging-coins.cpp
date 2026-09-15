class Solution {
public:
    int arrangeCoins(int n) {
/*
//BRUTEFORCE .....T.C- O(under root n).... S.C- O(1)
int row=1;
while(row<=n)
{
    n=n-row;
    row++;
}
return row-1;
*/
//BINARY SEARCH...[OPTIMAL]... T.C- O(log n)... S.C- O(1)

long long low=0;
long long high=n-1;
while(low<=high)
{
    long long mid=low+(high-low)/2;
    if((mid*(mid+1)/2) == n)
    {
        return mid;
    }
     if((mid*(mid+1)/2) < n)
    {
        low=mid+1;

    }
     if((mid*(mid+1)/2) > n)
    {
        high=mid-1;
    }

    if (n==1)
    {
        return 1;
    }
}
return high;
    }
};