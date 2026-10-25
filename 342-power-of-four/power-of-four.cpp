class Solution {
public:
    bool isPowerOfFour(int n) {
        /*

        while ( n > 1 &&  n % 4==0 )
        {
            n= n/4;
        }
        return n==1;
        */
if(n>0 && (n&(n-1))==0 && n%3==1)
{
    return true;
}

return false;

    }
};