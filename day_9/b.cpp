#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

void solve() {
    int l, r, L, R;
    cin >> l >> r >> L >> R;

    if(r < L || R < l) {
        cout << 1 << '\n';
        return;
    }
    int ans = 0;
    if(l > L) {
        swap(l, L);
        swap(r, R);
    }
    if(R <= r) {
        ans += abs(L-R);
        if(l < L) {
            ans ++;
        }
        if(r > R) {
            ans ++;
        }
    } else {
        ans += abs(r - L);
        if(l < L) {
            ans ++;
        }
        ans++;
    }
    cout << ans << '\n';
    return;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}
