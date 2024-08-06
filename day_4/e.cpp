#include<bits/stdc++.h>
using namespace std;

int f(int i) {
    int x = (log(i)/log(3));
    // cout << i <<" -> " << x+1 << '\n';
    return x+1;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int l, r;
        cin >> l >> r;
        long long ans = 0;
        ans = f(l)*2 + f(l+1);

        // cout << "ans is "<<ans << '\n';
        for(int i=l+2;i<=r;i++) {
            ans += f(i);
        }
        cout << ans << '\n';
    }
}
// 5
// 6
// 36
// 263
