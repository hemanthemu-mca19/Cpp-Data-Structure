#include <bits/stdc++.h>
using namespace std;


int setBit(int num, int pos){
        num |= (1 << pos);
    return num;
}
int main() {
	int num, pos;
	cin >> num >> pos;
	int ans = setBit(num, pos);
	cout << ans;
	return 0;
}
