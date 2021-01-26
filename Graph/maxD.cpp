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

vector<int> ar[100001];
int vis[100001];

int maxD, x;
int dfs(int node, int dis){
    if(maxD < dis){
        maxD = dis;
        x = node;
    }
    vis[node]=1;
    for( int child: ar[node]){
        if(vis[child] == 0)
            dfs(child, dis+1);
    }
    return x;
}
int main()
{
    int n, a, b;
    cin >> n;
    REP(i, n) cin>>a>>b, ar[a].pb(b), ar[b].pb(a);
    maxD = -1;
    int node = dfs(1,0);
    
    REP(i,n) vis[i] = 0;
    
    int ans = dfs(node, 0);
    
    cout << maxD << endl;
	return 0;
}
