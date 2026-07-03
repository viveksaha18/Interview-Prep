/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string findDuplicateCharacter(string s) {
    unordered_map<char, int> mpp;
    for(char c : s) {
        mpp[c]++;
    }
    string dupValue;
    for(auto it : mpp) {
        if(it.second > 1) {
            dupValue.push_back(it.first);
        }
    }
    return dupValue;
}

string findDuplicateCharacter1(string s) {
    int n = s.size();
    string dupValue;
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(s[i] == s[j]) {
                cnt=cnt+1;
            }
        }
        if(cnt >= 1 && dupValue.find(s[i]) == string::npos) {
            dupValue.push_back(s[i]);
        }
    }
    return dupValue;
}
int main() {
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    
    // Method 1 Using HashMap
    cout << "Time Complexity: O(n) ---- Space Complexity: O(n)" << endl;
    string ans = findDuplicateCharacter(s);
    cout << ans << endl;
    
    // Method 2 
    cout << "Time Complexity: O(n2) ---- Space Complexity: O(1)" << endl;
    string ans1 = findDuplicateCharacter1(s);
    cout << ans1 << endl;
    return 0;
}