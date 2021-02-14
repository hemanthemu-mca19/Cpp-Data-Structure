//pseudocode

findParent(int n){
  while(1) {
    if(parent[n] == n){
      return n;
    }
    else {
      n = parent[n];
    }
}
