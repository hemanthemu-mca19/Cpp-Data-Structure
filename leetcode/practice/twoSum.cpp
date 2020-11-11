class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> ans;
        map<int,int> m;
        int diff = 0;
        
        for(int i = 0; i < len; i++)
        {
            diff = target - nums[i];
            if(m[diff] != 0)
            {
                int a = m[diff];
                ans.push_back(a-1);
                ans.push_back(i);
                break;
            }
            m[nums[i]] = i+1;
                
        }
        return ans;
    }
};
