#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n, s, m;
        cin >> n >> s >> m;
        int l, r;
        bool flag = false;
        int prev=0;
        for(int i=0;i<n;i++) {
            cin >> l >> r;
            if(!flag) {
                if(l-prev >= s) {
                    flag = true;
                } else {
                    prev = r;
                }
            }
        }
        if(!flag) {
            if(m - r >= s) {
                flag = true;
            }
        }
        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

// 14
// 3
// 4
// 7
// 10
// 12
// 1
// 18
