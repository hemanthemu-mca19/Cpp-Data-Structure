class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        vector<int> c(3,0);
        int left =0, right=0, ans=0;
        while(left<n){
            while(!(c[0] and c[1] and c[2]) and right < n){
                c[s[right]-'a']++;
                right++;
            }
            if(c[0] and c[1] and c[2]){
                ans += n-right+1;
                c[s[left]-'a']--;
            }
            left++;
        }
        return ans;
    }
};
