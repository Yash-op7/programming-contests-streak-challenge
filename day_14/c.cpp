#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vb vector<bool>
#define vvb vector<vb>
#define vvvb vector<vvb>
#define pq priority_queue
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vl vector<ll>
#define vvl vector<vl>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define inp(n, a) for(int i=0;i<n;i++) cin >> a[i];
#define pb push_back
const ll INF = 1e12;
const int MOD = 1e9 + 7;


void solve() {
    int n, q;
    string a, b;
    cin >> n >> q;
    cin >> a >> b;

    vvi aPref(n, vi(26, 0));
    vvi bPref(n, vi(26, 0));

    aPref[0][a[0] - 'a']++;
    bPref[0][b[0] - 'a']++;

    for(int i=1;i<n;i++) {
        for(int j=0;j<26;j++) aPref[i][j] = aPref[i-1][j];
        for(int j=0;j<26;j++) bPref[i][j] = bPref[i-1][j];

        aPref[i][a[i] - 'a']++;
        bPref[i][b[i] - 'a']++;
    }

    for(int k=0;k<q;k++) {
        int l, r;
        cin >> l >> r;
        l--;r--;

        int extra = 0;
        for(int i=0;i<26;i++) {
            int cnt = aPref[r][i];
            if(l > 0) cnt -= aPref[l-1][i];

            int cnt2 = bPref[r][i];
            if(l > 0) cnt2 -= bPref[l-1][i];

            if(cnt > cnt2) {
                extra +=cnt - cnt2;
            }

        }
        cout << extra << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}
// 0
// 1
// 0
// 2
// 2
// 1
// 1
// 0


