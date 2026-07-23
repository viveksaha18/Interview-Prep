// Two Sum Problem
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++) {
            int rem = target - nums[i];
            if(mpp.find(rem) != mpp.end()) return {mpp[rem], i};
            mpp[nums[i]]=i;
        }
        return {-1, -1};
    }
};
int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution s;
    vector<int> ans =  s.twoSum(nums, target);
    cout << ans[0] << " " << ans[1];
    return 0;
}