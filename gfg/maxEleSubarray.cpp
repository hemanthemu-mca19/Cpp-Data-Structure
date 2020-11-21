// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    vector<int> ans;
    int i=0, j=0;
    int mx = arr[0];
    while(j<n){
        if(j-i+1 < k){
            j++;
            mx = max(mx, arr[j]);
        }
        else{
            ans.push_back(mx);
            if(arr[i] != mx){
                j++;
                i++;
                mx = max(arr[j], mx);
            }
            else{
                i++;
                j++;
                mx = arr[i];
                for(int l =i; l<=j; l++){
                    mx = max(mx, arr[l]);
                }
            }
        }
    }
    return ans;
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    vector <int> res = max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
