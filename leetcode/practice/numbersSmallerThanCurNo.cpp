class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans;
        for(int i = 0; i < len ; i++)
        {
            int count = 0;
            for(int j = 0; j < len; j++)
            {
                if(nums[i] > nums[j])
                    count++;
            }
            ans.push_back(count);
           
        }
        return ans;
    }
};
