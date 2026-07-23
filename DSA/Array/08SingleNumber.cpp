// Single Number 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int i = 0; i < nums.size(); i++){
            xor1^=nums[i];
        }
        return xor1;
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 2, 4};
    Solution s;
    cout << s.singleNumber(nums);
    return 0;
}