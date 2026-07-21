// Question: Moves Zeros to End 
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i = 0, j = 0;
        int n = a.size();
        int m = b.size();
        vector<int> Union;
        while(i < n && j < m) {
            if(a[i] <= b[j]) {
                if(Union.size() == 0 || Union.back() != a[i]) {
                    Union.push_back(a[i]);
                }
                i=i+1;
            }
            else {
                if(Union.size() == 0 || Union.back() != b[j]) {
                    Union.push_back(b[j]);
                }
                j=j+1;
            }
        }
        while(i < n) {
            if(Union.size() == 0 || Union.back() != a[i]) {
                Union.push_back(a[i]);
            }
            i=i+1;
            
        }
        while(j < m) {
            if(Union.size() == 0 || Union.back() != b[j]) {
                    Union.push_back(b[j]);
            }
            j=j+1;
        }
        return Union;
        
    }
};
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 6, 7};
    Solution s;
    
    vector<int> Union = s.findUnion(a, b);
    for(int i = 0; i < Union.size(); i++) {
        cout <<  Union[i] << " ";
    }
    return 0;
}