#include<bits/stdc++.h>
using namespace std;

void backtrack(){
if(ans.size()==nums.size()){
    result.push_back(ans);
}
for(int i=0;i<nums.size();i++){
    if(used[i]) continue;

    ans.push_back(nums[idx]);
    used[i]=true;

    backtrack(nums,result,ans,used);

    ans.pop_back();
    used[i]=false;
}



}
