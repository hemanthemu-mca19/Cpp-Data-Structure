/**
Problem Name: Count Number of Binary Strings
Problem Difficulty: 2
Problem Constraints: 1<=t<=100
1<=n<=90
Problem Description:
You are provided an integers N. You need to count all possible distinct binary strings of length N such that there are no consecutive 1's.


Input Format: First line contains integer t which is number of test case.
For each test case, it contains an integer n, which is the the length of Binary String.

Sample Input: 2
2
3
Output Format: Print the number of all possible binary strings.

Sample Output: 3
5
**/

#include<bits/stdc++.h>
	using namespace std;
	
	int countBString(int n){
		int dp[2][n+1] = {0}; // 2 rows for storing count of strings ending with 0's and 1's for each value of n
		dp[0][1] = 1; // for n=1, we have 1 string ending with 0
		dp[1][1] = 1;// for n=1, we have 1 string ending with 1
		
		//iteratively finding no of strings ending with 0's and 1's
		for(int i=2; i<=n; i++) {
			dp[0][i] = dp[0][i-1] + dp[1][i-1];//appending 0 at the end of each string either ending with 0 or 1 in each string of length i-1
			dp[1][i] = dp[0][i-1];//appending 1 at the end of each string ending with 0 in each string of length i-1
		}
		
		cout<< dp[0][n]+dp[1][n] << endl;
		return 0;
	}
	
	int main() {
		int t;
		cin >> t;
		while(t--) {
			int n;
			cin >> n;
			countBString(n);
			//cout<< res << endl;
		}
	}

