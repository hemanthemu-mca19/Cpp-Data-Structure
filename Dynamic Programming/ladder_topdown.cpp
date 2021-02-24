/**
Given 1 dna cell we have to form n cells by following any combinations of the given procedures:
1.doubling the number of cells involving a cost of x
2.decreasing the number of cellls by 1 involving a cost of y
3.increasing the number of cellls by 1 involving a cost of z

Your task is to find the cost cost to prepare n cells.

Input:
n and x, y, sizeof
Output:
minimum cost
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;
vector<int> dp(1000001);

int ladder_topdown(vector<int> dp, int n, int k){
    if(n==0)    return 1; //base case
    
    //lookup dp table
    if(dp[n] != 0)  return dp[n];
    
    //recursive case
    int ways = 0;
    for(int i=1; i<=k; i++){
        if(n-i>=0)
            ways += ladder_topdown(dp, n-i, k);
    }
    
    return dp[n] = ways;
}
void solve(){
    //code goes here
    int n, k;
    cin >> n >> k;
    cout <<ladder_topdown(dp, n, k)<<endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cout.tie(NULL);
cin.tie(NULL);
    int t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
