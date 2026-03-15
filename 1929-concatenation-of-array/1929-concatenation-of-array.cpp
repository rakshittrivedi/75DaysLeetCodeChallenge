#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int n = nums.size();
       vector<int> ans(2*n);
       for(int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
       } 
       return ans;
    }
};
/*int main(){
    Solution s;
    vector<int> nums={1,2,1};
    vector<int> result= s.getConcatenation(nums);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}*/