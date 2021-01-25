#include <iostream>
using namespace std;


int efficientXOR(int n){
    if(n%4 == 0) return n;
    if(n%4 == 1) return 1;
    if(n%4 == 2) return n+1;
    else return 0;
}

int naiveXor(int n){
    int res = 0;
    for(int i=1; i<=n; n++){
        res &= i;
    }
    return res;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	//int X = naiveXor(n);
	int ans = efficientXOR(n);
	cout << ans << endl;
	cout << X << endl;
	return 0;
}
