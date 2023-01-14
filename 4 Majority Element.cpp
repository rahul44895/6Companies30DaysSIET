
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int maxi=a[0];
        for(int x=1;x<size;x++){
            maxi=max(maxi,a[x]);
        }
        int freq[maxi+1]={0};
        for(int x=0;x<size;x++){
            freq[a[x]]++;
        }
        for(int x=0;x<=maxi;x++){
            if(freq[x]>(size/2)){
                return x;
            }
        }
        return -1;
    }
};