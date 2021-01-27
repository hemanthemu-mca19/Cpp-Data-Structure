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

vector<int> ar[1000001];
int vis[1000001], cc[1000001];
int curr_cc;

void dfs(int node){
    vis[node] = 1;
    cc[node] = curr_cc;
    for(auto child: ar[node]){
        if(vis[child] == 0){
            dfs(child);
        }
    }
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
   int t, n, k, a, b;
   string op;
   cin>>t;
   while(t--){
       cin>>n>>k;
       
       REP(i,n) vis[i] = 0, ar[i].clear();
       vector<pair<int,int>> edgeList;
       REP(i, k) {
           cin>>a>>op>>b;
           if(op == "=") ar[a].pb(b), ar[b].pb(a);
           else{
               edgeList.pb({a,b});
           }
        }
        
        for(int i=1; i<=n; i++){
            curr_cc++;
            if(vis[i]==0) dfs(i);
        }
        bool flag = true;
        
       for (int i = 0; i < edgeList.size(); i++) {
           /* code */
           a= edgeList[i].first;
           b= edgeList[i].second;
           
           if(cc[a] == cc[b]){
               flag = false;
               break;
           }
       }
       if(flag) cout<<"YES" <<endl;
       else cout<<"NO"<<endl;
   }
	return 0;
}
