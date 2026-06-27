#include<bits/stdc++.h>
using namespace std;

bool backtrack(vector<int>&nums,vector<int>&ans,int idx,int tar,int sum){
    if(idx==nums.size()){
      if(sum==tar){
    for(int val : ans){
        cout<<val<<" ";
    }
    return true;
   }
   cout<<endl;
   return false;
    }
    
 
    //include
   ans.push_back(nums[idx]);
   
     if(backtrack(nums,ans,idx+1,tar,sum+nums[idx])){
        return true;
     }

    ans.pop_back();
    //exclude
     if(backtrack(nums,ans,idx+1,tar,sum)){
        return true;
     }
     return false;
    
}






int main(){
    vector<int>nums={1,2,1};
    vector<int>ans;
    int sum=0;
    int k=2;
    backtrack(nums,ans,0,k,sum);
}