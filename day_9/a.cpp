#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    if(n >= 3) {
        cout << "NO\n";
        return;
    }
    if(abs(a[0] - a[1]) > 1) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}