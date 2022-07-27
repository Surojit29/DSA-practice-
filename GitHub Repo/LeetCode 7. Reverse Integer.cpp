// type medium

class Solution {
public:
    int reverse(int x) {
        int count = 0;
        while (x != 0)
        {
            int rem = x % 10;
            x /= 10;
           if((count > INT_MAX/10) || (count < INT_MIN/10))
           {
               return 0;
           }
            count = count * 10 + rem;
        }
        return count;
    }
};
