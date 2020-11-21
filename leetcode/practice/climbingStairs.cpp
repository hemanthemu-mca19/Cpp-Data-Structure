class Solution {
public:
    int climbStairs(int n) {
        vector<int> ways(n+1);
        ways[1] = 1;
        if(n>1) ways[2] = 2;
       if(n>2) {
           for(int i =3; i<n+1; i++){
           ways[i] = ways[i-1]+ways[i-2];
        }
       }
        
        return ways[n];
    }
};
