#include <bits/stdc++.h>

using namespace std;

void maxElement(int arr[], int n){
	sort(arr, arr+n);
	int count = 0;
	for(int i = 0; i<n; i++){
		if(arr[n/2] == arr[i])
			count++;	
	}
	if(count > n/2)
		cout << "max number obatined is: " << arr[n/2] << endl;
	else
		cout << "no max element..!!" << endl;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	maxElement(arr, n);
	return 0;
}
