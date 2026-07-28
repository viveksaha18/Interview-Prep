class Solution {
public:
vector<string> ans;
bool isValid(string& temp) {
    stack<char> st;
    int n = temp.size();
    for(int i = 0; i < n; i++) {
        if(temp[i] == '(') {
            st.push(temp[i]);
        }
        else {
            if(st.size() == 0) return false;
            st.pop();
        }
    }
    return st.size() == 0;
}
void allParenthesis(int n, string& temp) {
    if(temp.size() == 2*n) {
        if(isValid(temp)) {
            ans.push_back(string(temp.begin(), temp.end()));
            return;
        }
        return;
    }
    temp.push_back('(');
    allParenthesis(n, temp);
    temp.pop_back();
    temp.push_back(')');
    allParenthesis(n, temp);
    temp.pop_back();
}
    vector<string> generateParenthesis(int n) {
        string temp;
        allParenthesis(n, temp);
        return ans;
    }
};