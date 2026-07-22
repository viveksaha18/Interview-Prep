// Question : Factorial of a number
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n == 0 || n == 1) return 1;
        return n * factorial(n-1);
    }
};

int main() {
    int n = 5;
    Solution s;
    int ans = s.factorial(n);
    cout << ans;
    return 0;
}