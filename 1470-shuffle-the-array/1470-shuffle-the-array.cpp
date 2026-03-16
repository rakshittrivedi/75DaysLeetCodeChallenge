#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        ans.reserve(2*n);
        for(int i = 0 ; i < n ; i++ ){
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }        
        return ans;
    }
};

/*int main(){
    Solution s;
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> result = s.shuffle(nums,n);
    for (int x : result)cout<<x<<" ";
    return 0;
}*/