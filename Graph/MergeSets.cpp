#include<bits/stdc++.h>
int parent[100001], R[100001];

void merge(int a, int b) {
  a= find (a);
  b= find (b);
  
  if ( a == b)  return  ;
  
  if(R[a] > R[b]) {
    // rank a is more, we will merge tree b into a i.e. a will be final parent
    parent[b] = a;
    R[a] += R[b];
  }
  
  else {
  parent[a] = b;
  R[b] += a;
  }
}

int main() {
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    parent[i] = -1;
    Rank[i] = 1;
    }
    
    merge(a, b);
    
    return 0;
  }
