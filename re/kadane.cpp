long long maxSubarraySum(int arr[], int n){
        
    int maxi = INT_MIN;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}