class Solution {
public:
    bool isPerfectSquare(int num) {
        bool flag = false;
        int i = 1;
        while(i<46341)
        {
            if(i*i == num)
            {
                flag = true;
                break;
            }
            i++;
        }
        return flag;
    }
};
