#include<bits/stdc++.h>
  using namespace std;
  
    vector<int> dp(100,0);
     
 int minCoins(int n, int coins[], int T) {
    if(n == 0) return 0;
    
    if(dp[n] != 0)  return dp[n];
    
    int ans = INT_MAX;
    for(int i=0; i<T; i++) {
        if(n-coins[i] >= 0) {
            int subProb = minCoins(n-coins[i], coins, T);
            ans = min(ans, 1+subProb);
        }
    }
    dp[n] = ans;
    return dp[n];
 } 
  
   

  int main() {
    int n;
    cin >> n;
    int coins[] = {1, 7, 10};
    int T = sizeof(coins)/sizeof(int);
 
    int res = minCoins(n, coins, T);
    cout << res << endl;
    return 0;
  }
