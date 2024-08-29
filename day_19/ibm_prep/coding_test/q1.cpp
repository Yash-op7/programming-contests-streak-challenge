#include <bits/stdc++.h>
using namespace std;

// string comperssion

void solve() {
    string str;
    cin >> str;
    vector<int> freq(26, 0);
    int n = str.length();
    for(int i=0;i<n;i++) {
        char c = str[i];
        i++;
        int factor = 1;
        while(i<n && str[i] >= '0' && str[i] <= '9') {
            freq[c-'a'] += factor * (str[i] - '0');
            factor*=10;
            i++;
        }
        if(factor == 1) {
            freq[c-'a']++;
        }
        i--;
    }
    string ans = "";
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            char c = 'a' + i;
            ans += c + to_string(freq[i]);
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}

