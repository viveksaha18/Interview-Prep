/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// Method 1 Defination
bool isValid(string s, string t) {
    int n = s.size();
    int m = t.size();
    if(n != m) return false;
    int freq[26] = {0};
    for(int i = 0; i < n; i++) {
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) return false;
    }
    return true;
}

// Method 2 Defination 
bool isValid1(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return (s==t);
}
int main() {
    string s;
    cout << "Enter the first string" << endl;
    cin >> s;
    string t; 
    cout << "Enter the second string" << endl;
    cin >> t;
    
    // Method 1 
    cout << "Method 1 Using Freq Array Time Complexity: O(n) ---- Space Complexity:O(n)" << endl;
    bool ans = isValid(s, t);
    if(ans) cout << "The strings are Anagrams" << endl;
    else cout << "The strings are not Anagrams" << endl;
    
    // Method 2
    cout << "Method 2 Using Sorting" << endl;
    cout << "Time Complexity: O(nlogn) ----- Space Complexity: O(1)" << endl;
    bool ans1 = isValid1(s, t);
    if(ans1) cout << "The strings are Anagrams" << endl;
    else cout << "The strings are not Anagrams" << endl;
    return 0;
}