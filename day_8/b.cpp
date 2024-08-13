#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<bool> seats(n, false);
    int x; cin >> x;
    x--;
    vector<int>a(n);
    for(int i=1;i<n;i++) {
        cin >> a[i];
    }
    seats[x] = true;
    for(int i=1;i<n;i++) {
        x = a[i];
        x--;
        if((x > 0 && seats[x-1] )|| (x < n-1 && seats[x+1])) {
            seats[x] = true;
        } else {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}