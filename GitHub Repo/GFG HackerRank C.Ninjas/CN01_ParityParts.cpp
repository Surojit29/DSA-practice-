For test case 1:
The even-subpart is "ac", and the odd-subpart is "bd".
Hence, we return the odd-subpart string "bd" as it is lexicographically greater.

For test case 2:
The even-subpart is "eb", and the odd-subpart is "eb".
Hence, we return the string "eb" as the subparts are equal.

  // ->>>>>>>
  
#include <string>
using namespace std;

string greaterParitySubpart(string &s) {
    
    // Declaring a variable 'n' as the length of the string 's'.
    int n = s.size();

    // Declaring two strings for storing the even and odd subparts.
    string evenSubpart, oddSubpart;

    // Iterating over the string 's' to build 'evenSubpart' and 'oddSubpart'.
    for (int i = 0; i < n; ++i) {

        /* Concatenating the current character to 'evenSubpart' if the index is even,
        otherwise, concatenating it to 'oddSubpart'. */
        if (i % 2 == 0) {
            evenSubpart += s[i];
        }
        else {
            oddSubpart += s[i];
        }
    }

    // Returning 'evenSubpart' if it is lexicographically greater, otherwise returning 'oddSubpart'.
           if (evenSubpart > oddSubpart) {
        return evenSubpart;
    }
    else {
        return oddSubpart;
    }
}
