#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;
vector<int> dp(100000);

int steppingBP(int N, int k){
    dp[0] = 1; //ground state
    
    for(int n=1; n<=N; n++ ) //loop for filling n steps dp
    for(int i =1; i<=k; i++){   // summing the the K ways to reach any stage
        if(n-i >=0) dp[n] += dp[n-i];
    }
    
    return dp[N];
}
void solve(int t){
    //code here
    int n, k;
    cin >> n >> k;
    cout << steppingBP(n, k) << endl;
    
    
}

int main()
{
    int t =1;
    //cin>>t;
    solve(t);
   
	return 0;
}

