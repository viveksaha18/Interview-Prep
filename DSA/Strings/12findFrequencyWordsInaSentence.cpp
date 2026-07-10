/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Enter a sentence: " << endl;
    string s;
    getline(cin, s);
    string word = "";
    int n = s.size();
    unordered_map<string, int> mpp;
    for(int i = 0; i <= n; i++) {
        if(i == n || s[i] == ' ') {
            mpp[word]++;
            word="";
        }
        else {
            word += s[i];
        }
    }
    for(auto it : mpp) {
        cout << it.first << "-->"<< "Frequency: " << it.second << endl;
    }
    return 0;
}