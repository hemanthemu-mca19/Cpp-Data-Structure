// Iterative pesudocode for path compression


find(a) {
  vector<int> v;
  while(parent[a] > 0) {
    v.push_back(a);
    a = parent[a];
  }
  
  for(int i = 0; i < v.size(); i++) {
    parent[v[i]] = a;
  }
  return a;
}



// Recursive pesudocode for path compression

find(a) {
  if (parent[a] < 0)  return a;
  
  else {
    int x = find(parent(a));
    parent[a] = x;
    return x;
  }
}
