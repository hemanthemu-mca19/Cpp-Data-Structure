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
