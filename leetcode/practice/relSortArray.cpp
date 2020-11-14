class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int s1 = arr1.size();
        int s2 = arr2.size();
        vector<int> ans;
        int count[1001] = {0};
        for(int i =0; i<s1; i++)
            count[arr1[i]]++;
        for(int j=0; j<s2; j++){
            while(count[arr2[j]] > 0){
                ans.push_back(arr2[j]);
                count[arr2[j]]--;
            }
        }
        for(int k = 0; k < 1001; k++){
            while(count[k] > 0){
                ans.push_back(k);
                count[k]--;
            }
        }
        
        return ans;
    }
};
