class Solution {
public:
vector<vector<int>> ans;
void allCombinationSum(vector<int>& temp, vector<int>& candidates, int idx, int target) {
    // Base Case
    if(target == 0) {
        ans.push_back(temp);
        return;
    }
    if(idx == candidates.size() || target < 0) return;

    // take (here multiple time)
    temp.push_back(candidates[idx]);
    allCombinationSum(temp, candidates, idx, target-candidates[idx]);
    // not take
    temp.pop_back();
    allCombinationSum(temp, candidates, idx+1, target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        allCombinationSum(temp, candidates, 0, target);
        return ans;
    }
};