#include<bits/stdc++.h>
using namespace std;

string longestWord(string s) {
    int n = s.size();
    string word = "";
    string lword = "";
    for(int i = 0; i <= n; i++) {
        if(i == n || s[i] == ' ') {
            if(word.size() > lword.size()) {
                lword=word;
            }
            word="";
        }
        else {
            word += s[i];
        }
    }
    return lword;
}
int main() {
    string s;
    cout << "Enter the string" << endl;
    getline(cin, s);  
    // Longest word in a sentence
    cout << longestWord(s);
    return 0;
}