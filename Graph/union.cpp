// pseudocode


// find function
find(n) {
  while(1) {
    if (parent[n] == n) return n;
    else n = parent[n];
  }
}


// union function
union(a, b) {
  a = find (a);
  b = find (b);
  
  if (a == b) return ;
  
  else  a = parent[b];
  
}
