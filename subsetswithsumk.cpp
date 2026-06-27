#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<int>&nums,vector<int>&ans,int idx,int tar,int sum){
    if(idx==nums.size()){
      if(sum==tar){
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
   }
   return;
    }
    
 
     
    //include
    ans.push_back(nums[idx]);
 backtrack(nums,ans,idx+1,tar,sum+nums[idx]);

    ans.pop_back();
    //exclude
    backtrack(nums,ans,idx+1,tar,sum);

}





int main(){
    vector<int>nums={1,2,1};
    vector<int>ans;
    int sum=0;
    int k=2;
    backtrack(nums,ans,0,k,sum);
}