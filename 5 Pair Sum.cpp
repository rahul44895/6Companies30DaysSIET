#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &v, int s){
   // Write your code here.
    sort(v.begin(), v.end());
    vector<vector<int>> vec;
    int i=0;
    for(int x=0;x<v.size();x++){
        for(int y=x+1;y<v.size();y++){
            if(v[x]+v[y]==s){
                vec.push_back(vector<int> ());
                vec[i].push_back(v[x]);
                vec[i].push_back(v[y]);i++;
            }
        }
    }
    return vec;
}