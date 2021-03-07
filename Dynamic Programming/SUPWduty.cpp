/**
Problem Name: SUPW
Problem Difficulty: 
Problem Constraints: N < = 1000000

Problem Description:
In ICO School, all students have to participate regularly in SUPW. There is a different SUPW activity each day, and each activity has its own duration. 
The SUPW schedule for the next term has been announced, including information about the number of minutes taken by each activity.
Nikhil has been designated SUPW coordinator. His task is to assign SUPW duties to students, including himself. 
The school's rules say that no student can go three days in a row without any SUPW duty.
Nikhil wants to find an assignment of SUPW duty for himself that minimizes the number of minutes he spends overall on SUPW.

Input Format: A single integer N, the number of days in the future for which SUPW data is available.
N non-negative integers, where the integer in position i represents the number of minutes required for SUPW work on day i.

Sample Input: 10
3 2 1 1 2 3 1 3 2 1
Output Format: The output consists of a single non-negative integer, the minimum number of minutes that Nikhil needs to spend on SUPW duties this term


Sample Output: 4

=====Solution=====
**/

#include<bits/stdc++.h>
	using namespace std;
	
	vector<int> dp(1000000);

	int SUPWduty(vector<int> time, int n) {
		dp[1] = time[1];
		dp[2] = time[2];
		dp[3] = time[3];
		
		for(int i=4; i<=n; i++) {
			dp[i] = time[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
		}
		return min(dp[n], min(dp[n-1], dp[n-2]));
	}
	int main() {
		int n;
		cin >> n;
		
		vector<int> time(n+1);
		for(int i=1; i<=n; i++)	cin >> time[i];
		
		cout << SUPWduty(time, n) << endl;
		
		return 0;
	}
