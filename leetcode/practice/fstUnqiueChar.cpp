class Solution {
public:
    int firstUniqChar(string s) {
        int alpa[26] = {0};
        int index = -1;
        
        for(int i=0; i<s.size(); i++){
            alpa[s[i]-'a']++;
        }
        for(int i =0; i <s.size(); i++){
            if(alpa[s[i]-'a'] == 1)
            {
                index = i;
                break;
            }
        }
         return index;
    }
};
