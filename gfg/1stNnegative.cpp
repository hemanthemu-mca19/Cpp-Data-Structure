#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin>> n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	   int k;
	   cin >> k;
	   queue<int> q;
	   for(int i=0; i<k; i++){
	      if(arr[i] < 0) {
	           q.push(arr[i]);
	       }
	   }
	   for(int i=k; i<n; i++){
	       if(!q.empty()) cout << q.front() << " ";
	       else cout<< "0 "; 
	       
	       if(arr[i] < 0) q.push(arr[i]);
	       
	       if(arr[i-k]==q.front()) q.pop();
	   }
	    if(!q.empty()) cout << q.front() << " ";
	    else cout<< "0 ";
	   cout << endl;
	}
	return 0;
}
