#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<int>&nums,vector<int>&ans,int idx){
    if(idx==nums.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
     cout<<endl;
    return;
    }
  
    //include
    ans.push_back(nums[idx]);
   

 backtrack(nums,ans,idx+1);

    ans.pop_back();
    //exclude
    backtrack(nums,ans,idx+1);

}







int main(){
    vector<int>nums={1,2,3};
    vector<int>ans;
    backtrack(nums,ans,0);
}