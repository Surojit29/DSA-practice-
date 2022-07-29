// type medium
// 2 tast case run only
// need O(logn)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int l = mid;
        while(s >= l){
            int midl = s + (l - s)/2;
            if(nums[midl] == target){
                return midl;
            }
            else 
                if(nums[midl] < target)
                    s = midl + 1;
                else
                    l = midl - 1;
        }
        while(mid <= e) {
            int midr = mid + (e - mid)/2;
            if(nums[midr] == target){
                return midr;
            }
            else
                if(nums[midr] < target)
                    mid = midr + 1;
                else
                    e = midr - 1;
        }
        return -1;
    }
};
