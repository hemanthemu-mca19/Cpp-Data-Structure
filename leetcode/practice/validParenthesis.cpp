class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        stack <char> st;
        bool flag = true;
        char s1 = '(', s2 = '{', s3 = '[';
        for(int i =0; i<len; i++)
        {   
            if(st.empty() and (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            {
                flag = false;
                break;
            }
            if(s[i] == ')')
            {
                if(st.top() == s1)
                {
                    st.pop();
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(s[i] == '}')
            {
                if(st.top() == s2)
                {
                    st.pop();
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(s[i] == ']')
            {
                if(st.top() == s3)
                {
                    st.pop();
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            
            st.push(s[i]);
            continue;     
        }
        if(!st.empty())
            flag = false;
        return flag;
    }
};
