int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    int order[100001] = {0};
    //  for(int i=0; i<10001; i++){
    //     order[i] = -1;
    // }
    for(int i=l; i<=r; i++){
        order[arr[i]] = arr[i];
    }
    int ans, count =0;
    for(int i=0; i<100001; i++){
        if(count == k){
            ans = order[i-1];
            break;
        }
            
        if(order[i]!=0)
            count++;
        
    }
    return ans;
}
