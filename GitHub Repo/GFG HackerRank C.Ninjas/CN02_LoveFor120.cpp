For test case 1:
The three pairs of indices satisfying the condition are,
Index pair (0,2) as 'X[0] - X[2]' = 360 - 120 = 240 is a multiple of 120.
Index pair (0,1) as 'X[0] - X[1]  = 360 - 240 = 120 is a multiple of 120.
Index pair (1,2) as 'X[2] - X[3]' = 240 - 120 = 120 is a multiple of 120. 



For test case 2:
There are no pair of indices satisfying the condition.

//->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


int MaxMultiples(int n, vector<int> x) {
	// Write your code here.
    int cnt = 0;
    for(int i = 0; i < x.size(); i++){
        for(int j = i+1; j < x.size(); j++){
            int div = x[j] - x[i];
            if(div%120 == 0) cnt++;
        }
    }
    return cnt;
}

//Brute Force Solution ->>>>>
// ->>>>>>>>

#include<vector>
using namespace std;

int MaxMultiples(int n, vector<int> x) {

    // Integer variable 'count' to store result.
    int count = 0;

    // Iterate over all elements of 'X'.
    for(int i = 0; i < n; i++) {
        // For every element, iterate to its right in a nested loop.
        for(int j = i + 1; j < n; j++) {

            // If the difference of the two numbers is a multiple of 120, increment count.
            if( (x[i] - x[j])%120 == 0 ) {
                count++;
            }
        }
    }

    // Return 'count' as the final output.
    return count;
}
