#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&nums,int idx){

if(idx==0||idx==1){
    return true;
}
return nums[idx-1]>=nums[idx-2] && check(nums,idx-1);

}




int main(){
     vector<int>nums={1,2,6,4,5};
     int n=nums.size();
bool ans = check(nums,n);
cout<<ans<<endl;
}