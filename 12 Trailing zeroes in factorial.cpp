class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int count=0, div=5;
        while(N/div>0){
            count+=N/div;
            div*=5;
        }
        return count;
    }
};