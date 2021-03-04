/**
Problem Name: Friends Pairing Problem
Problem Difficulty: None
Problem Constraints: 1<= n < 30
Problem Description:
Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.

Input Format: First line contains an integer t denoting the number of test cases.
Next t lines contain an integer n each.
Sample Input: 1
3
Output Format: Output t lines each line describing the answer.
Sample Output: 4
**/

#include<bits/stdc++.h>
	using namespace std;
	int dp[30];
	
	int friendsPairing(int dp[], int n) {
		//base cases
		if(n==1) return 1;
		if(n==2) return 2;
		
		//look-up table
		if(dp[n]!=0) return dp[n];
		
		//computing other values
		//Two cases
		//case 1: he can stay single along with n-1 people can arrange among themselves
		//case 2: he can pair up with any of n-1 people and rest can pair up among themselves
		dp[n] = friendsPairing(dp, n-1) + (n-1)*friendsPairing(dp, n-2);  
		return dp[n];
		
	}
	//TopDown Approach
	long long countFriendsPairings(int n){
	long long dp[n+1];

	// Filling dp[] in bottom-up manner using
	// recursive formula explained above.
	for (int i=0; i<=n; i++)
	{
		if (i <= 2)
		dp[i] = i;
		else
		dp[i] = dp[i-1] + (i-1) * dp[i-2];
	}

	return dp[n];
}
	int main() {
		int t;
		cin >>t ;
		while(t--){
			int n;
			cin >> n;
			int ans = friendsPairing(dp, n);
			cout<< ans << endl;
		}
	}
