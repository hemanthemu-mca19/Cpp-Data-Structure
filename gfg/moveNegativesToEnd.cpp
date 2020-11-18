#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin>> n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	       // if(a[i] > 0)
	       //     cout<< a[i] << " ";
	    }
	    for(int i=0; i<n; i++){
	       if(a[i]>=0)
	        cout<< a[i] << " ";
	    }
	    for(int i=0; i<n; i++){
	       if(a[i]<0)
	        cout<< a[i] << " ";
	    }
	    cout<< endl;
	  
	}
	
	return 0;
}
