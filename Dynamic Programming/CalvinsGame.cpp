/**
Problem Name: Calvin's Game
Problem Difficulty: 
Problem Constraints:  1 ≤ N ≤ 2*10^5
 -1000 <= Ai <= 1000
Problem Description:
Calvin wakes up early one morning and finds that all his friends in the hostel are asleep. To amuse himself, he decides to play the following game : he draws a sequence of N squares on the ground, numbered 1 to N, and writes an integer in each square. He starts at square k (1 ≤ k ≤ N). The game consists of one forward phase followed by one backward phase.

:- In the forward phase, Calvin makes zero or more moves of the following type : if his current position is p, he can jump to p+1 or p+2 as long as he stays within the N squares.

:- In the backward phase, Calvin makes zero or more moves of the following type : if his current position is p, he can jump to p−1 or p−2 as long as he stays within the N squares.

He plays such that he finally ends up at square 1, and then he stops. He starts with a score of 0, and each time he jumps from square i to square j, he adds the integer written in square j to his score. Find the maximum score Calvin can obtain by playing this game. Recall that Calvin must start at square k and end at square 1. The integer on the square where he starts is not included in his score.

For example, suppose N = 5 and the numbers in squares are 5, 3, −2, 1, 1. If k = 2, Calvin starts on the second square. He can make a forward move to square 4, another to square 5, a backward move to square 4, another to square 2, and another to square 1. His total score is 1+1+1+3+5 = 11. You can check that this is the maximum score possible.

Input Format: • Line 1 : Two space-separated integers, N and k, with 1 ≤ k ≤ N.
• Line 2 : A space-separated sequence of N integers, the numbers in squares 1, 2 . . . , N .

Sample Input: 5 2
5 3 -2 1 1
Output Format: 
A single line with a single integer, the maximum score Calvin can obtain by playing the game.

Sample Output: 11



=====Solution=====

**/


#include<bits/stdc++.h>
	using namespace std;
	
	vector<int> dpf(10000001), dpb(10000001);
	
	void calvinPath(vector<int> &a, int n, int k) {
		dpb[1] = a[1];
		dpb[2] = a[1] + a[2];
		for(int j =2; j<=n; j++){
			dpb[j] = a[j] + max(dpb[j-1], dpb[j-2]);
		}
		for(int j=k+1; j<=n; j++){
			dpf[j] = a[j] + max(dpf[j-1], dpf[j-2]);
		}
		
//		for(int i=1; i<=n; i++)	cout << dpf[i];
//		cout << endl;
//		for(int i=1; i<=n; i++)	cout << dpb[i];
//		cout << endl;
	}
	int main() {
		int n, k;
		cin >> n >> k;
		vector<int> arr(n+1);
		for(int i=1; i<=n; i++)	cin >> arr[i];
//		for(int i=0; i<=n; i++) cout <<arr[i] << " ";
//		cout << endl;
		calvinPath(arr, n, k);
		
		cout<<dpf[n] + dpb[n] - arr[n];
		
		return 0;
	}
