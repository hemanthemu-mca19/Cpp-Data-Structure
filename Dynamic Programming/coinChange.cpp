/**
Problem Name: Coin Change
Problem Difficulty: None
Problem Constraints: 1<=N<=250
1<=m<=50
1 <= Si <= 50
Problem Description:
Given a value N, if we want to make change for N cents,
and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins,
In how many ways can we make the change? The order of coins doesn�t matter.


Input Format: First line of input contain two space separated integers N and M.
Second line of input contains M space separated integers - value of coins.
Sample Input: 10 4
2 5 3 6
Output Format: Output a single integer denoting the number of ways to make the given change using given coin denominations.
Sample Output: 5



=====Solution=====
**/

#include<bits/stdc++.h>
	using namespace std;
	
	int coinChange(vector<int> dp, vector<int> coins, int sum, int coinIdx) {
		//base cases
		if(sum < 0) return 0;
		if(sum == 0) return 1;
		if(coinIdx < 0) return 0;
		
		//lookup-table
		if(dp[sum]!=0) return dp[sum];
		
		//recursive solution
		dp[sum] =  coinChange(dp, coins, sum, coinIdx-1) + coinChange(dp, coins, sum-coins[coinIdx], coinIdx);
		return dp[sum];
	}
	int main() {
		int n, m;
		cin >>n >>m;
		vector<int> coins(m);
		vector<int> dp(n+1,0);
		for(int i=0; i<m; i++){
			cin>> coins[i];
		}
		int res = coinChange(dp, coins, n, m-1);
		cout << res << endl;
		
		return 0;
	}
