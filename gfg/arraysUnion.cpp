#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while(t--){
	    int n, m;
	    cin >> n >>m;
	    int a[n], b[m];
	    int ans = 0;
	    int count[100001] = {0};
	    for(int i =0; i<n; i++){
	        cin >> a[i];
	        count[a[i]]++;
	    }
	    for(int i =0; i<m; i++){
	        cin >> b[i];
	        count[b[i]]++;
	    }
	    for(int i =0; i<100001; i++){
	        if(count[i] > 0)
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}
