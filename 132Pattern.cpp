class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n = nums.size();
        vector<int> first(n);
        first[0] = nums[0];
        for(int i=1; i<n; i++){
           first[i] = min(first[i-1], nums[i]) ;
        }
        stack<int> st;
        
        for(int i = n-1; i>=0; i--){
            if(nums[i]>first[i]){
                 while(!st.empty() && st.top()<=first[i]){
                    st.pop();
                }
                if(!st.empty() and nums[i]>st.top()) return true;
            
                st.push(nums[i]);
            }
        }
        return false;
    }
};
