//Find the minimum number of partitions in a string to make each substring a palindrome
#include<bits/stdc++.h>
#define mod 1000000007
#define INF 100000000
#define FOR(i, n) for(int i=0; i<=n; i++)
#define FOR1(i, n) for(int i=1; i<=n; i++)
using namespace std;
int static t[102][102];
bool isPalindrome(string str, int i, int j) {
	if(i>=j) return true; //string of length 1 or 0 is always a palindrome
	while(i < j) {
		if(str[i] == str[j]) {
			i++;
			j--;
		}
		else return false;
	}
}

int MinimumPalindrome(string s, int i, int j) {
	//base condition
	if(i>=j)	return 0; //no partition is possible for null string or string of length 1.
	
	//check if string is a palindrome
	if(isPalindrome(s, i, j))	return 0;// no partition is required for a palindromic string
	
	//look-up
	if(t[i][j] != -1) return t[i][j];
	
	//recusive solution
	int mn = INT_MAX, left, right;
	for(int k=i; k<=j-1; k++) {
		//look-up left sub-tree
		if(t[i][k] != -1) left = t[i][k];
		else left = MinimumPalindrome(s, i, k);
		//look-up right sub-tree
		if(t[k+1][j] != -1) right = t[k+1][j];
		else right = MinimumPalindrome(s, k+1, j);
		//computing cost for the function call
		int temp = 1 + left + right;
		mn = min(mn, temp);
	}
	return t[i][j] = mn;
}
int main() {
	string str;
	cout<<"enter string: ";
	cin>> str;
	int n;
	n = str.length();
	memset(t, -1, sizeof(t));
	cout << MinimumPalindrome(str, 0, n-1) << endl;
//	FOR(i,n) {
//		FOR(j, n) {
//			cout << t[i][j] << "  ";
//		}
//		cout << endl;
//	}
	return 0;
}
