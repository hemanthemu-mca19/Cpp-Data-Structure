#include<bits/stdc++.h>
  using namespace std;
  
  int dp[100] = {0};
  
  int minSteps(int n, int dp[]) {
    if(n ==1) return 0;
    
    if(dp[n] != 0)  return dp[n];
    
    int op1, op2, op3, ans;
    op1 = op2 = op3 = INT_MAX;
    if(n%3 == 0) {
      op1 = 1+minSteps(n/3, dp);
    }
    
   if(n%2 == 0) {
      op2 = 1+minSteps(n/2, dp);
    }
   
   op3 = 1+minSteps(n-1, dp);
   
   ans = min(min(op1, op2), op3);
   dp[n] = ans;
   return dp[n];
 }
  
  
  int main() {
    int n;
    cin >> n;
    
    int res = minSteps(n, dp);
    cout << res << endl;
    return 0;
  }
