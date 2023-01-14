#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxi=0L, sum=0L;
    for(int x=0;x<n;x++){
        if(sum<0){
            sum=0;
        }
        
            sum+=arr[x]+0L;
            maxi=max(maxi, sum);
        
    }
    return maxi;
}


//kadane's algorithm