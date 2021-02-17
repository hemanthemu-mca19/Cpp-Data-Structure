#include<bits/stdc++.h>
  using namespace std;
  
  
  
  int TDminSteps(int n, int dp[]) {
      dp[1] = 0;
      int op1, op2, op3;
      
      
      for (int i = 2; i <= n; i++) {
        op1 = op2 = op3 = INT_MAX;
        if(i%3 == 0)    op1 = dp[i/3];
        if(i%2 == 0)    op2 = dp[i/2];
        op3 = dp[i-1];
        dp[i] = min(min(op1, op2), op3)+1;
      }
    //   for(int i=1; i<=n; i++) cout <<dp[i] << " ";
      return dp[n];
}

    

  int main() {
    int n;
    cin >> n;
    int dp[100] = {0};
    int res = TDminSteps(n, dp);
    cout << res << endl;
    return 0;
  }
