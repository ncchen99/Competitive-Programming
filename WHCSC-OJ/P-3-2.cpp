#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    map<char, char> mp = {{')', '('}, {']', '['}, {'}', '{'}};
    while (cin >> s) {
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if (!st.empty() && mp.find(s[i]) != mp.end() && mp[s[i]] == st.top()) {
                // cout<<"find!"<<endl;
                st.pop();
            } else
                st.push(s[i]);
            // cout<<st.top()<<endl;
        }
        cout << (st.empty() ? "yes" : "no") << endl;
    }
}