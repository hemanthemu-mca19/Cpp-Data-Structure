#include<bits/stdc++.h>
using namespace std;
 
int fibb(int n) {
    if (n == 0 || n ==1) return n;
    
   int dp[101];
   dp[0] = 0;
   dp[1] = 1;
   
   for(int i=2; i<=n; i++){
       dp[i] = dp[i-1] + dp[i-2];
   }
   
   return dp[n];
}

int fibbOpt(int n){
     if (n == 0 || n ==1) return n;
     
     int a=0, b=1, c;
     for(int i=2; i<=n; i++){
        c= a+b;
        a = b;
        b = c;
     }
     return c;
}
int main() {
    
    int n;
    cin >>n;
    
    int res = fibb(n);
    
    cout << res <<endl;
    
    return 0;
}
