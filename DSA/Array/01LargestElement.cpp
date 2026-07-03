#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxElement = arr[0];
        for(int i = 1; i < n; i++) {
            if(maxElement < arr[i]) maxElement=arr[i];
        }
        return maxElement;
    }
};

int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.largest(arr) << endl;
}
