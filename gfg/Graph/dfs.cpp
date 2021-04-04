#include<bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i=0; i<n; i++)
vector<int> egdelist[10001];
int	vis[10001];
void adjList(int u, int v) {
	egdelist[u].push_back(v);
	egdelist[v].push_back(u);
}

void dfs(int n) {
	vis[n] = 1;
	cout<<n <<"->";
	FOR(i, n) {
		for(auto x :egdelist[n]) {
			if(vis[x] != 1)	dfs(x);
		}
	}
}

int main() {
	int V, E;
	V =5;
	E =8;
	int u, v;
	FOR(i, E) {
		cin>>u>>v;
		adjList(u, v);
	}
	
	dfs(0);
	return 0;	
}
/**
edges
0 1
0 2
1 3
1 4
2 4
3 4
3 5
4 5
**/
