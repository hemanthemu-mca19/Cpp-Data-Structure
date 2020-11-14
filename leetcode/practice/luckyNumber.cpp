class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count[501] = {0};
        int index = -1;
        for(int i =0; i<arr.size(); i++)
        {
            count[arr[i]]++;
        }
        for(int j=500; j >= 1; j--)
        {
            if (count[j] == j)
            {
                index = j;
                break;
            }
        }
        return index;
    }
};
