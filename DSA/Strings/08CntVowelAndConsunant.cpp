#include<bits/stdc++.h>
using namespace std;

pair<int, int> cntVowelAndConsunant(string s) {
    int n = s.size();
    int v = 0, c = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            v=v+1;
        }
        else c=c+1;
    }
    return {v, c};
}
int main() {
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    pair<int, int> p = cntVowelAndConsunant(s);
    cout << "Vowels: " << " " << p.first << endl;
    cout << "Consunant: " << " " << p.second << endl;
    return 0;
}