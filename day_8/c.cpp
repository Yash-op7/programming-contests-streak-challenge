#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> m;
    string str;
    for(int i=0;i<m;i++) {
        cin >> str;
        unordered_map<int, char>map_num;
        unordered_map<char, int>map_char;
        if(n != str.length()) {
            cout << "No\n";
            continue;
        }
        bool flag = true;
        for(int i=0;i<n;i++) {
            int x = a[i];
            char c = str[i];
            if(map_num.find(x) == map_num.end() && map_char.find(c) == map_char.end()) {
                map_num[x] = c;
                map_char[c] = x;
            } else {
                if(map_num[x] == c && map_char[c] == x) {
                    continue;
                } else {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}