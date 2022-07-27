#include<iostream>
using namespace std;

bool duplicates(int arr[] , int n) {
    int i = 0;
    bool x = false;
    while(i < n){
            for(int j = i+1; j < n; j++) {
                if(arr[i]==arr[j]){
                    x = true;
                    cout << "i= " << i<< " " << "j= "<<j << endl;
                    break;
                }
            }
        if(x==true) break;
        i++;
    }
    return x;

}

int main(){
    int arr[4] = {1,2,5,4};
    cout << duplicates(arr,4);


}
// Run time error

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
    sort(nums.begin(),nums.end());
            for(int i = 0; i < int(nums.size()); i++) {
                if(nums[i]==nums[i+1]){
                    return true;
                }
            }
        return false;
    }
    //using sorting , and also soln. is 2loop iteration ,  using maps ,using set hash table//
};
