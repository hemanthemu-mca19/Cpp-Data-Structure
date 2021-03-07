/**
Problem Name: Rain Water Harvesting
Problem Difficulty: None
Problem Constraints: 1 <= N <= 10^6

Problem Description:
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.
Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save. 

Explanation for the Sample input Testcase:� 
<img src="https://minio.cb.lk/img/ScHHWbX.jpg" alt="Elevation Map" height="150" width="300">�  
So the total units of water she can save is 5 units

Input Format: First line contains an integer n. Second line contains n space separated integers representing the elevation map.
Sample Input: 10
0 2 1 3 0 1 2 1 2 1

Output Format: Print a single integer containing the maximum unit of waters she can save.
Sample Output: 5
 **/
 
 /**
 Approach:
 lmax
 0 2 2 3 3 3 3 3 3 3
 rmax
 3 3 3 3 2 2 2 2 2 1
 min(lmax, rmax) 
 0 2 2 3 2 2 2 2 2 1
 input
 0 2 1 3 0 1 2 1 2 1
 diff(min-input)
 0 0 1 0 2 1 0 1 0 0
 sum += diff[i]
 **/
 
 
 #include<bits/stdc++.h>
 	using namespace std;
 	void RainWaterHarvst(vector<int> h, int n) {
 		vector<int> lmax(n), rmax(n), diff(n), minLR(n);
 		int sum = 0;
 		lmax[0] = h[0], rmax[n-1] = h[n-1];
 		for(int i=1; i<n; i++)
 			lmax[i] = max(lmax[i-1], h[i]);
		
		for(int i=n-2; i>=0; i--) 
			rmax[i] = max(h[i], rmax[i+1]);
		
		for(int i=0; i<n; i++) 
			minLR[i] = min(lmax[i], rmax[i]);
			
		for(int i=1; i<n; i++) {
 			diff[i] = abs(minLR[i] - h[i]);
 			sum += diff[i];	
 		}
 		
// 		for(int i=0; i<n; i++) cout << lmax[i] <<" ";
// 		cout<<endl;
// 		for(int i=0; i<n; i++) cout << rmax[i] <<" ";
// 		cout<<endl;
// 		for(int i=0; i<n; i++) cout << minLR[i] <<" ";
// 		cout<<endl;
// 		for(int i=0; i<n; i++) cout << diff[i] <<" ";
// 		cout<<endl;
 		
 		cout << sum << endl;
 		return ;
	 }
 	int main() {
 		int n;
 		cin >> n;
 		vector<int> roofHeight(n);
 		for(int i=0; i<n; i++) cin>>roofHeight[i];
 		RainWaterHarvst(roofHeight, n);
 		return 0;
	 }
 
 
