#include<bits/stdc++.h>
using namespace std;

/**int rainwatr(int arr[], int n){
	
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
}**/

int maxWater(int arr[], int n){
    int left[n], right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    
    for(int i = 1; i < n; i++){
        left[i] = max(left[i-1], arr[i]);
        right[n-i-1] = max(right[n-i],arr[n-i-1]);
    }
    
    
    
    int water = 0;
    for(int j = 0; j < n; j++){
        water += (min(left[j], right[j]) - arr[j]);
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
	
	//int water = rainwatr(arr, n);
	
	int water = maxWater(arr, n);
	
	cout<<"ans = "<< water << 	 endl;
	
	return 0;
}
