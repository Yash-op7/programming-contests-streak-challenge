#include<bits/stdc++.h>
using namespace std;

bool f(int x, int y, string &s, string &t, int n, int m, string &ans) {
    if(x == n) {
        return y == m;
    }
    if(y == m) return true;
    if(s[x] == t[y]) return f(x+1, y+1, s, t, n, m, ans);
    else {
        if(s[x] == '?') {
            ans[x] = t[y];
            return f(x+1, y+1, s, t, n, m, ans);
        } else {
            return f(x+1, y, s, t, n, m, ans);
        }
    }
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string s, t;
        cin >> s;
        cin >> t;
        string s_ans = s;
        bool flag = f(0, 0, s, t, s.length(), t.length(), s_ans);
        if(flag) {
            for(int i=0;i<s.length();i++) {
                if(s_ans[i] == '?') {
                    s_ans[i] = 'a';
                }
            }
            cout << "YES\n" << s_ans << '\n';
        } else {
            cout << "NO\n";
        }
    }
}


// YES
// xabax
// YES
// abcde
// YES
// ayyyx
// NO
// NO
