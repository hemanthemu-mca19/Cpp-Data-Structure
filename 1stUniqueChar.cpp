class Solution {
public:
    int firstUniqChar(string s) {
        string str = s;
      int index = -1; 
      int n = str.length();
      int arr[26] = {0};
      for(int i=0; i<n; i++){
        arr[str[i]-'a']++;
      }
      int flag = 0;
      for(int i=0; i<n; i++){
        if(arr[str[i]-'a'] == 1)
        {
          index = i;
          break;
        }
      }
     return index;   
    }
};
