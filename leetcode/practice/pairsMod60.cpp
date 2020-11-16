class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> rem(60,0);
        int ans =0;
        for(auto x:time){
            if(x%60 == 0) ans += rem[0];
            else ans += rem[60- x%60];
            rem[x%60]++;
        }
        return ans;
    }
};
