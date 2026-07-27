class Solution {
public:
vector<vector<int>> ans;

// Time Complexity : O(n* 2^n) O(n) for copying elements to temp vector
// Space Complexity : O(n) for recursion stack space and O(2^n) for ans vector and O(n) for temp vector 
// Over all Space Complexity : O(n*2^n)
void allSubsets(vector<int>& temp, int idx, int n, vector<int>& nums) {
    if(idx == n) {
        ans.push_back(temp);
        return;
    }

    // take 
    temp.push_back(nums[idx]);
    allSubsets(temp, idx+1, n, nums);

    // non-take 
    temp.pop_back();
    allSubsets(temp, idx+1, n, nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        allSubsets(temp, 0, n, nums);
        return ans;
    }
};