class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(), lb;
        multimap<int, int> mp;
        vector<int> ans;
        for(int i=0; i<m; i++){
            reverse(mat[i].begin(), mat[i].end());
            lb = lower_bound(mat[i].begin(), mat[i].end(), 1) - mat[i].begin();
            mp.insert({(m-lb),i});
        }
        int count = 0;
        auto it = mp.begin();
            while(k--){
                ans.push_back(it->second);
                it++;
            }
        return ans;
    }
};
