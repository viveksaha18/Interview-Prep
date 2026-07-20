// Question : Rotate Array 
#include<bits/stdc++.h>
using namespace std;
vector<int> rotatedSorted(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    return nums;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotatedSorted(nums, k);
    cout << "Rotated Sorted Array: " << endl;
    for(int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
    return 0;
}