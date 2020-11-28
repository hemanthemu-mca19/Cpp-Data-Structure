class Solution {
public:
    int maxPower(string s) {
        int mx=0;
        int i=0,n=s.size();
        while(i<n){
            int cnt=1;
            while(s[i]==s[i+1]){
                cnt++;
                i++;
            }
            mx=max(mx,cnt);
            if(cnt==1) i++;
        }
        return mx;
    }
};
