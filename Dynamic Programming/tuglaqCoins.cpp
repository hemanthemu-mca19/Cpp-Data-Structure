/**
Problem Name: Exchanging Coins
Problem Difficulty: None
Problem Constraints: 0 <= n <= 1 000 000 000
Problem Description:
Tughlaq introduces a strange monetary system. He introduces copper coins and each coin has a number written on it. 
A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. A coin can also be sold for gold. 
One can get as much grams of gold as the number written on the coin. You have one copper coin. 
What is the maximum weight of gold one can get from it?

Input Format: The input file contains a single integer <b><i>n</i></b>, the number on the coin.
Sample Input: 12
Output Format: Print the maximum weight of gold you can get.
Sample Output: 13
**/
#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int tuglaqCoins(int n) {
  if(n<=1000000 && dp[n] != 0)
		return dp[n];
	//base  case
	if(n <= 11){
		dp[n] = n;
		return dp[n];
	}
	int ans = max(n,tuglaqCoins(n/2)+tuglaqCoins(n/3)+tuglaqCoins(n/4));
	if(n <= 1000000)
		dp[n] = ans;//memoize the answer
	return ans;
}
int main() {
	int n;
	cin>> n;
	cout<< tuglaqCoins(n);
	return 0;
}
