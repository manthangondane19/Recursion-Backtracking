#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&nums,int st,int end){

    if(st!=end){
   swap(nums[st],nums[end]);
    reverse(nums,st+1,end-1);
}

}


int main(){
vector<int>nums={1,2,3,4,5};
int n=nums.size();
reverse(nums,0,n-1);
for(int i : nums){
    cout<<i<<" ";
}
}