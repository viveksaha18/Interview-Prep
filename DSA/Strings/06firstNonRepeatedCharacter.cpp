#include<bits/stdc++.h>
using namespace std;

// Method 1 Defination
char firstNonRepeatedCharacter(string s) {
    int n = s.size();
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(s[i] == s[j]) cnt=cnt+1;
        }
        if(cnt == 1) return s[i];
    }
    return ' ';
}

// Method 2 Defination 
char firstNonRepeatedCharacter1(string s) {
    int n = s.size();
    int freq[26]={0};
    for(int i = 0; i < n; i++) {
        freq[s[i]-'a']++;
    }
    for(int i = 0; i < n; i++) {
        if(freq[s[i]-'a'] == 1) return s[i]; 
    }
    return ' ';
}
int main() {
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    
    // Method 1 
    cout << "Time Complexity: O(n2) ------- Space Complexity: O(1)" << endl;
    char c = firstNonRepeatedCharacter(s);
    cout << "First Non-Repeated-Character is: " << " " << c << endl;
    
    // Method 2
    cout << "Time Complexity: O(n) -------- Space Complexity: O(n)" << endl;
    char x = firstNonRepeatedCharacter1(s);
    cout << "First Non-Repeated-Character is: " << " " << x << endl;
    return 0;
}