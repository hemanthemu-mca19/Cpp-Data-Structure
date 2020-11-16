class Solution {
public:
    string removeDuplicates(string S) {
        int n = S.size();
        vector<int> prev;
        int i=0;
        while(i < n){
           if(S[i] == S[i+1]) 
           {
               S = S.erase(i, 2);
               if(i!=0) i--;
           }
            else i++;  
        }
        return S;
    }
};
