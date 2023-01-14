int findDuplicate(vector<int> &a) 
{
    // Write your code here
	int maxi=a[0];
        for(int x=1;x<a.size();x++){
            maxi=max(maxi,a[x]);
        }
        int freq[maxi+1]={0};
        for(int x=0;x<a.size();x++){
            freq[a[x]]++;
        }
        for(int x=0;x<=maxi;x++){
            if(freq[x]>1){
                return x;
            }
        }
        return -1;
}
