// type Easy

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int sol = 0;
        //edge case
        if(n == 0)
        {
            return 1;
        }
        while(m != 0)
        {
            sol = (sol<<1) | 1;
            m >>= 1;
        }
        int ans = (~n) & sol;
        return ans;
    }
};
