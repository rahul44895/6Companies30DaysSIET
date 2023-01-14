
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here   
        vector <long long int> p;
        long long int product=1L,i=0;
        while(i<n){
        for(int x=0;x<n;x++){
            if(x!=i)product*=nums[x];
        }
        p.push_back(product);
            i++;
            product =1;
        }
        return p;
    }
};