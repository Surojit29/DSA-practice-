// type easy
// (Reverse the array)
vector<int> reverseArray(vector<int> a) {
        int n = a.size();
        for(int i = 0; i < n; i++){
            if(i>=n-i) break;
            swap(a[i],a[n-i-1]);
        }
        return a;
}
