#include<bits/stdc++.h>
using namespace std;

bool isDigit(char c) {
    int num = (int)c;
    if(num >= 48 && num <= 57) return true;
    return false;
}
bool checkStringContainOnlyDigit(string s) {
    int n = s.size();
    for(int i = 0; i < n; i++) {
        bool ans = isDigit(s[i]);
        if(ans == false) return false;
    }
    return true;
}
int main() {
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    bool ans = checkStringContainOnlyDigit(s);
    if(ans) cout << "True";
    else cout << "False";
    return 0;
}