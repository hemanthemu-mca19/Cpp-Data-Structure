int maxSubarraySum(int arr[], int n){
    
    // Your code here
    //int n = arr.size();
    
    int currSum = arr[0];
    int maxSum = arr[0];
    for(int i=1; i<n; i++){
        currSum = max(arr[i], arr[i]+currSum);
        if(currSum > maxSum)
            maxSum = currSum;
    }
    if(currSum > maxSum)
            maxSum = currSum;
    return maxSum;
    
}
