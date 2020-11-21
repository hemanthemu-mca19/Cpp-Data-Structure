class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int max_i =A[0];
        int max_j;
        int ans = 0;
        for(int j=1; j<A.size();j++){
            max_j = A[j]-j;
            ans = max(ans,max_i + max_j);
            if(A[j]+j > max_i) max_i = A[j]+j;   
        }
        return ans;
    }
};
