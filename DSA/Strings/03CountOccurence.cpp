/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int cntOccurence(char c, string s) {
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == c) {
            cnt=cnt+1;
        }
    }
    return cnt;
}
int main() {
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    char c;
    cout << "Enter a character to count its occurence" << endl;
    cin >> c;
    int cnt = cntOccurence(c, s);
    cout << "Time Complexity : O(n) --- Space Complexity: O(1)"
    cout << "Occurence of the character " << c << " " << "is : " << cnt << endl;
    return 0;
}