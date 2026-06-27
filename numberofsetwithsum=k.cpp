#include<bits/stdc++.h>
using namespace std;

int backtrack(vector<int>&nums,int idx,int tar,int sum){
    if(idx==nums.size()){
   
 return (sum==tar);
    }
 

return (backtrack(nums,idx+1,tar,sum+nums[idx])+backtrack(nums,idx+1,tar,sum));
   
}





int main(){
    vector<int>nums={1,2,1};
    vector<int>ans;
    int sum=0;
    int k=2;
    backtrack(nums,0,k,sum);
}