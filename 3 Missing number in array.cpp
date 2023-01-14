class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int summ=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<array.size();i++){
            sum+=array[i];
        }
        return summ-sum;
    }
};