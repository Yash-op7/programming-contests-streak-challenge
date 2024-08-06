#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if(a > c) {
            ans += b > d;
        }
        if(a > d) {
            ans += b > c;
        }
        if(b > d) {
            ans += a > c;
        }
        if(b > c) {
            ans += a > d;
        }
        cout << ans << '\n';
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
