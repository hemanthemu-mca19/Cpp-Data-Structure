class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.length();
        int seen = -1;
        vector<int> ans(n, INT_MAX);
        for(int i=0; i< n; i++){
            if (S[i]==C) seen = i;
            if(seen != -1) ans[i] = i-seen;
        }
        seen = -1;
        for(int i=n-1; i>=0; i--){
            if (S[i]==C) seen = i;
            if(seen != -1) ans[i] = min(ans[i], seen-i);
        }
        return ans;
    }
};
