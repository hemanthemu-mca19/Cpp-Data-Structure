// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[101][101];
    int mcm(int a[], int l, int r) {
        if(l>=r) return 0;
        if(dp[l][r] != -1)   return dp[l][r];
        dp[l][r] = INT_MAX;
        for(int i=l; i<r; i++){
            int c1 = mcm(a, l, i);
            int c2 = mcm(a, i+1, r);
            int cost = c1 + c2 + a[l-1]*a[i]*a[r];
            dp[l][r] = min(dp[l][r], cost);
        }
        return dp[l][r];
    }
    
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp, -1, sizeof(dp));
        int l =1, r = N-1;
        return mcm(arr, l, r);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends
