#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<int>&nums,vector<vector<int>>&result,vector<int>&ans,int tar,int sum,int idx){
   if(sum==tar) result.push_back(ans);

   if(sum>target) return;

   if(idx==nums.size()) return;

   for(int i=idx;i<nums.size();i++){
    if(i>idx&&nums[i]==nums[i-1]) continue;

    ans.push_back(nums[i]);
    backtrack(i+1,sum+nums[i],tar);

    ans.pop_back();
   }
}

int main(){
    vector<int>nums;
    vector<vector<int>>result;
    vector<int>ans;
    int target;
    int sum;

    backtrack(nums,result,ans,target,0,0);

}