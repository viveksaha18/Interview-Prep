/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// Method1 Defination 
string reverseString1(string s) {
    // predefined functin in cpp
    reverse(s.begin(), s.end());
    return s;
}

// Method 2 Defination

string reverseStringe2(string s) {
    int n = s.size();
    string t=s;
    int j = 0;
    for(int i = n-1; i >= 0; i--) {
        t[j]=s[i];
        j++;
    }
    return t;
}

// Method 3 Defination

string reverseStringe3(string s) {
    int n = s.size();
    int i = 0, j = n-1;
    while(i < j) {
        swap(s[i], s[j]);
        i++, j--;
    }
    return s;
}
int main() {
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    // Method 1
    cout << "Method 1 using pre-define function" << endl;
    cout << "Time Complexity: O(n) ----- Space Complexity: O(1)" << endl;
    string reverse1 = reverseString1(s);
    cout << "Ans: " << reverse1 << endl;
    
    // Method 2
    cout << "Method 2 Using Extra String" << endl;
    cout << "Time Complexity: O(n) ----- Space Complexity: O(n)" << endl;
    string reverse2 = reverseStringe2(s);
    cout << "Ans: " << reverse2 << endl;
    
    // Method 3  
    cout << "Method 3 without extra space" << endl;
    cout << "Time Complexity: O(n/2) ----- Space Complexity: O(1)" << endl;
    string reverse3 = reverseStringe3(s);
    cout << "Ans: " << reverse3 << endl;
    return 0;
}