/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string reverseStringe3(string s) {
    int n = s.size();
    int i = 0, j = n-1;
    while(i < j) {
        swap(s[i], s[j]);
        i++, j--;
    }
    return s;
}

// Method 1 Defination 
bool checkPalindrome(string s) {
    string rev = reverseStringe3(s);
    if(s == rev) return true;
    return false;
}

// Method 2 Defination Two Pointer Approach
bool checkPalindromeOptimal(string s) {
    int n = s.size();
    int i = 0, j = n-1;
    while(i < j) {
        if(s[i] != s[j]) return false;
        i++, --j;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    
    // Method 1 using Reverse Function 
    cout << " Method 1 : Time Complexity: O(n/2) Space Complexity: O(n)" << endl;
    bool ans = checkPalindrome(s);
    if(ans == true) cout << "String is Palindrome" << endl;
    else cout << "String is not palindrome" << endl;
    
    cout << "Method 2 : Time Complexity: O(n/2) and Space Complexity: O(1)" << endl;
    bool ans1 = checkPalindromeOptimal(s);
    if(ans1) cout << "String is Palindrome" << endl;
    else cout << "String is not Palindrome" << endl;
    return 0;
}