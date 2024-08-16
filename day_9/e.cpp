#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define inp(n, a) for(int i=0;i<n;i++) cin >> a[i];
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;
    vi a(n);
    int odds = 0, evens = 0;

    inp(n, a);
    sort(all(a));
    bool f = true;
    int i = 0;
    while(i< n && a[i] == 1) {
        i++;
        f = !f;
    }
    for(;i<n;i++) {
        if(a[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }
    if(odds %2 == 1) {
        if(f) {
            cout << "Allic\n";
        } else {
            cout << "Bob\n";
        }
    } else {
        if(!f) {
            cout << "Allic\n";
        } else {
            cout << "Bob\n";
        }
    }

    
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}
