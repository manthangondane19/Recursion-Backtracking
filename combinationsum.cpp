#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<int>&nums,vector<vector<int>>&result,vector<int>&ans,int idx,int sum,int target){
if(idx==nums.size()){
    if(sum==target){
        result.push_back(ans);
    }
    return;
}
if(sum>target) return;
//include
ans.push_back(nums[idx]);
backtrack(nums,result,ans,idx,sum+nums[idx],tar);
//exclude
ans.pop_back();
backtrack(nums,result,ans,idx+1m,sum,tar);
}

int main(){
    vector<int>nums;
    vector<<vector<int>result;
    vector<int>ans;
    int target;
    backtrack(nums,result,ans,0,0,target);
     
}