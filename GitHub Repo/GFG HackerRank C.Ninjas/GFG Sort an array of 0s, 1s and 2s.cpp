// 1st best approach T.C-- O(n)
#include <bits/stdc++.h>
using namespace std;
  
// Function to sort the input array,
// the array is assumed
// to have values in {0, 1, 2}
void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
  
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
  
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
  
        // If the element is 1 .
        case 1:
            mid++;
            break;
  
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}

// by mine T.C -- O(n) for small i/o, when arr[] lenth is small ...

    void sort012(int a[], int n)
    {
        // code here
       int  j = -1;
        for(int i = 1; i < n; i++){
            if(a[i-1] > a[i]){
                swap(a[i-1],a[i]);
                j++;
            }
            if(a[j] > a[i-1]){
                swap(a[j],a[i-1]);
            }
        }
        for(int i = 1; i < n; i++){
            if(a[i-1] > a[i]){
                swap(a[i-1],a[i]);
            }
        }
    }
