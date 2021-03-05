/**
Problem Name: Palindromic Queries 
Problem Difficulty: None
Problem Constraints: n <= 1000


m <= 100000
Problem Description:
Given a string s and m queries .
Each query consists of (l,r) where 1 <= l <= r <= n(size of string).

You need to print whether l to r is a palindromic string or not.� 

A string can be called palindrome if its reverse is same as itself . Ex - "aba" .

Input Format: First line contains n 
Second lines contains a string of length n.
Next line contains m where m is the number of queries .
Next m lines contains two integers l,r as described in the question.
Sample Input: 5
abbac
2
1 4
2 4
Output Format: for every query from l to r print "YES" if s[l.....r] is palindrome else print "NO" without quotes in a new line.
Sample Output: YES
NO



=====Solution=====

**/

#include<bits/stdc++.h>
	using namespace std;
	
	int dp[1001][1001];
	
	void pal(string str,int n){
		for(int i=0; i<n; i++){
			dp[i][i] = 1;
		}
		
		for(int i=n-1; i>=0; i--){
			for(int j=i+1; j<n; j++){
				if(j-i<2){
					if(str[i] == str[j]) dp[i][j] = 1;
					else dp[i][j] = 0;
				}
				else{
					if(str[i] == str[j] and dp[i+1][j-1]==1) dp[i][j] =1;
					else dp[i][j] = 0; 
				}
			}
		}
		
		
	}
	int main(){
		int n, m, l, r;
		string str;
		cin>>n;
		cin>> str;
		
		pal(str, n);
		
		cin >>m;
		
		while(m--){
			cin>>l>>r;
			l--, r--;
			cout<<dp[l][r] << endl;
		}

	}
