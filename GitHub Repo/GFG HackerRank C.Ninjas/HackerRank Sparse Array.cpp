//type medium

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
        int n = strings.size();
        int qn = queries.size();
        int qi = 0;
        vector<int> ds;
        while(qi < qn) {
            int cnt = 0;
            for(int i = 0; i < n; i++) {
                if(queries[qi] == strings[i])
                    cnt++;
            }
            ds.push_back(cnt);
            qi++;
        }
        return ds;
}
