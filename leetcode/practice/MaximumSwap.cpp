class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int len = str.size(), prev;
        int flag = -1;
        bool move = false;
        for(int j=0; j<len; j++)
           if(!move){
               for(int i=len-1; i>=j; i--){
               if(str[j] < str[i]){
                if(flag == 0){
                    swap(str[j], str[prev]);
                }
                swap(str[j],str[i]);
                prev = i;
                flag = 0;
                move = true;
                }
            }
         
        }
       num = stoi(str);
        return num;
        
    }
};
