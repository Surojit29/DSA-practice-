// type easy
class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem, sum=0, prd=1;
        while(n!=0)
        {
            rem = n%10;
            sum += rem;
            prd *= rem;
            n = n/10;
        }
        int answer = prd - sum;
        return answer;
        
    }
};
