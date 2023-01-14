#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int a=-1, b=-1;
    for(int x=0;x<n;x++)   {
        if(arr[x]==k){
            a=x;
            break;
        }
    }
    for(int x=n-1;x>=0;x--)   {
        if(arr[x]==k){
            b=x;
            break;
        }
    }
    pair<int,int> p={a,b};
    return p;
}