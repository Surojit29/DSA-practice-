// simple using just pow function for power calculation..

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i = 0; i <= 30; i++)
        {
            int ans = pow(2,i);
            if(ans == n)
            {
                return true;
            }
        }
        return false;
        
    }
};

// using binary search but run time error Time Complexity

class Solution {
public:
    bool bSearch(int n) {
        int s = 0;
        int e = n;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(pow(2,mid)==n) return true;
            if(pow(2,mid) < n) s = mid - 1;
            else e = mid - 1;
        }
        return false;
    }
    bool isPowerOfTwo(int n) {
        return bSearch(n);
    }
};
