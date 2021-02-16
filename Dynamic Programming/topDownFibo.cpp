#include<bits/stdc++.h>
using namespace std;
 
int fibb(int n, int dp[]) {
    if (n == 0 || n ==1) return n;
    
    int ans =  fibb(n-1, dp) + fibb(n-2, dp);
    dp[n] = ans;
    return ans;
}
int main() {
    
    int n;
    cin >>n;
    int dp[1001] = {0};
    int res = fibb(n, dp);
    cout << res <<endl;
    
    return 0;
}
