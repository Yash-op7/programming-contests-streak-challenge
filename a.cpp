#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    if(m == 1) {
        if(n == 1) {
            cout << -1 << '\n';
            return;
        } else {
            int x, y;
            cin >> y;
            for(int i=1;i<n;i++) {
                cin >> x;
                cout << x << '\n'; 
            }
            cout << y << '\n';
        }
        return;
    }
    int x, y;
    for(int i=0;i<n;i++) {
        cin >> x;
        y = x;
        for(int i=1;i<m;i++) {
            cin >> x;
            cout << x << ' ';
        }
        cout << y << '\n';
    }
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
}