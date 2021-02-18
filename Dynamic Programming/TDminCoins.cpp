#include<bits/stdc++.h>
  using namespace std;
  
    vector<int> dp(100,0);
     
 int minCoins(int n, int coins[], int T) {
    dp.at(0) = 0;
    for(int i=1; i<=n; i++){
        dp[i] = INT_MAX;
         
        for(int j=0; j<=T; j++){
            if(i - coins[j]>=0) {
                dp[i] = min(dp[i], dp[i-coins[j]]+1);
            }
        }
    }
    //for(int i=1; i<=n; i++) cout<<dp[i] << " ";
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
