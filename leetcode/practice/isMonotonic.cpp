class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        return (is_sorted(A.begin(), A.end()) or is_sorted(A.begin(), A.end(), greater<int>()));
        
    }
};
