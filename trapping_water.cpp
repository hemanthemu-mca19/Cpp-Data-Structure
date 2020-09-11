#include<bits/stdc++.h>
using namespace std;

int rainwatr(int arr[], int n){
	
	int water = 0;
	for (int i = 1; i < n-1; i++){
	    int lmax = arr[i], rmax = arr[i];
		for(int j = i; j >= 0; j--){
			if(arr[j] > lmax)
				lmax = arr[j];
		}
		
		for (int j = i; j < n; j++){
			if(arr[j] > rmax)
				rmax = arr[j];
		}
		
		water += min(lmax, rmax) - arr[i];
		cout<< water;
	}
	
	return water;
}

int main(){
	int n;
	cout<<"enter the size of the array: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int water = rainwatr(arr, n);
	
	cout<<"ans = "<< water << 	 endl;
	
	return 0;
}
