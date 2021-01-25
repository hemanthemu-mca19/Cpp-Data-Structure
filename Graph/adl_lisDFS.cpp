#include <bits/stdc++.h>
using namespace std;

int visited[100001];
vector<int> adj_lis[100001];

void dfsSearch(int n){
    visited[n] = 1;
    cout << n << " -> ";
    for(int child : adj_lis[n]){
        if(visited[child] != 1) dfsSearch(child);
    }
}

int main() {
	// your code goes here
	for (int i = 0; i < 100001; i++) {
	    visited[i] = 0;
	}
	int vertex, edge;
	cin >> vertex >> edge;
	int v1, v2;
	for (int i = 1; i <= edge; i++) {
	    cin >> v1 >> v2;
	    adj_lis[v1].push_back(v2);
	    adj_lis[v2].push_back(v1);
	}
	int cc=0;
	for (int i = 1; i <=vertex; i++) {
	    if(visited[i] != 1) {
	        dfsSearch(i);
	        cc++;
	        cout << endl;
	    }
	}
	cout << cc << endl;
	return 0;
}
