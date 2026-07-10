/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int num = 0;
    for(int i = 0; i < s.size(); i++) {
        num = num *10 + (s[i]-'0');
    }
    cout << num;
    return 0;
}