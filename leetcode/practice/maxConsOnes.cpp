class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int l=0, h=0;
        while (h< A.size()) {
            if (A[h] == 0) --k;
            if (k < 0) {
                if(A[l] == 0){
                    k++;
                    l++;
                }
                else{
                    l++;
                
                }
            }
            h++;
        }
        return h-l;
    }
};
