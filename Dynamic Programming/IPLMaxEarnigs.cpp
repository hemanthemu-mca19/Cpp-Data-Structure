/**
Problem Name: IPL
Problem Difficulty: None
Problem Constraints: N < 1000000
a[i] < 1000

Problem Description:
In IPL 2025, the amount that each player is paid varies from match to match. The match fee depends on the quality of opposition, the venue etc.
The match fees for each match in the new season have been announced in advance. 
Each team has to enforce a mandatory rotation policy so that no player ever plays three matches in a row during the season.
Nikhil is the captain and chooses the team for each match. 
He wants to allocate a playing schedule for himself to maximize his earnings through match fees during the season.

Input Format: Line 1: A single integer N, the number of games in the IPL season.
Line 2: N non-negative integers, where the integer in position i represents the fee for match i.

Sample Input: 8
3 2 3 2 3 5 1 3

Output Format: The output consists of a single non-negative integer, the maximum amount of money that Nikhil can earn during this IPL season.
Sample Output: 17


=====Solution=====
**/


#include<bits/stdc++.h>
	using namespace std;
	
	vector<int> dp(1000001);

	int SUPWduty(vector<int> time, int n) {
		dp[1] = time[1];
		dp[2] = time[2];
		dp[3] = time[3];
		
		for(int i=4; i<=n; i++) {
			dp[i] = time[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
		}
		return min(dp[n], min(dp[n-1], dp[n-2]));
	}
	int IPL(vector<int> time, int n){
		int sum = 0;
		for(int i=1; i<=n; i++)	sum+=time[i];
		return sum - SUPWduty(time, n); 
	}
	
	int main() {
		int n;
		cin >> n;
		vector<int> time(n+1);
		for(int i=1; i<=n; i++)	cin >> time[i];
		
		cout << IPL(time, n) << endl;
		
		return 0;
	}
