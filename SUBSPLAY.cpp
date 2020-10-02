#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        string str;
        cin >> str;
        int min = INT_MAX;
        int visited[26];
        for(int i = 0; i < 26; i++)
            visited[i] = INT_MIN;
        int val;
        for(int i = 0; i < N; i++){

            if(visited[str[i] - 'a'] == INT_MIN){
                visited[str[i] - 'a'] = i;
            }

            else{
                val = i - visited[str[i] - 'a'];
                visited[str[i] - 'a'] = i;
                if(val < min)
                    min = val;
            }
        }
        if(min == INT_MAX)
            cout << "0" << endl;
        
        else{
            min = min - 1;
            cout << N-1-min << endl;
        }
        
    }
return 0;
}