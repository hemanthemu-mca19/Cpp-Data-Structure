#include <bits/stdc++.h>

using namespace std;

void mooreAlgo(int arr[], int n)
{
	int major = arr[0], count = 1;
	for(int i = 1; i < n; i++){
		if(arr[i] == major)
			count++;
		else
			count--;
		if(arr[i] != major && count == 0){
			major = arr[i];
			count = 1;
		}
	}
	
	if(count > 0){
		int major_count = 0;
		for(int j = 0; j < n; j++){
			if(arr[j] == major)
				major_count++;
		}
		
		if(major_count > n/2)
			cout << "majority element is: " << major;
		else
			cout << "majority element doesn't exist..!!";	
	}
	else
		cout << "majority element doesn't exist..!!";	
	
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}	
	
	mooreAlgo(arr, n);
	
	return 0;
}
