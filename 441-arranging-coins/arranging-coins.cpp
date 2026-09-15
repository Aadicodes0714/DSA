class Solution {
public:
    int arrangeCoins(int n) {

//BRUTEFORCE .....T.C- O(under root n).... S.C- O(1)

int row=1;

while(row<=n)
{
    n=n-row;
    row++;

}

return row-1;





//BINARY SEARCH...[OPTIMAL]... T.C- O(log n)... S.C- O(1)

    }
};