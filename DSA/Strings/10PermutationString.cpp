#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
void permutationofString(string& s, int i) {
    if(i == s.size()) {
        ans.push_back(s);
        return;
    }
    for(int j = i; j < s.size(); j++) {
        swap(s[i], s[j]);
        permutationofString(s, i+1);
        swap(s[i], s[j]);
    }
}
int main() {
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    permutationofString(s, 0);
    for(auto it : ans) {
        cout << it << endl;
    }
    return 0;
}