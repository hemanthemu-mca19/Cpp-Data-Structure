#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string str;
	    cin >> str;
	    if(str.length() & 1) {
	        cout << "-1" << endl;
	        continue;
	    }
	    stack<char> st;
	    for(int i=0; i<str.length(); i++){
	        if(!st.empty() && st.top() == '{'){
	            if(str[i] == '}') st.pop();
	            else st.push(str[i]);
	        }
	        else st.push(str[i]);
	    }
	    
	    int n = st.size();
	    int open = 0;
	    while(!st.empty() && st.top() == '{'){
	        open++;
	        st.pop();
	    }
	    int close = n - open;
	    int ans = ceil(1.0*open/2) + ceil(1.0*close/2);
	    cout << ans << endl;
	}
	return 0;
}
