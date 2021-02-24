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

int cellMutations(int n, int x, int y, int z){
    dp[0] = 0;
    dp[1] = 0;
    for(int i=2; i<=n; i++){
        if(i%2 == 0){
            dp[i] = min(dp[i/2]+x, dp[i-1]+y);
        }
        else{
            dp[i] = min(dp[i-1]+y, dp[((i+1)/2)]+x+z);
        }
    }
    return dp[n];
}
void solve(){
    //code goes here
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    cout <<cellMutations(n, x, y, z)<<endl;
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
