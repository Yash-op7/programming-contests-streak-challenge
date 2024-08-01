#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    int n, k;
    cin >> tt;
    while(tt--) {
        cin >> n >> k;
        int ans = 0;
        if(k > n) {
            k-= n;
            ans++;
        } else {
            if(k == 0) {
                cout << 0 << '\n';
                continue;
            } else {
                cout << 1 << '\n';
                continue;
            }
        }
        n--;
        while(k > 0) {
            ans++;
            k-=n;
            if(k>0) {
                ans++;
                k-=n;
            } else {
                break;
            }
            n--;
        }
        cout << ans << '\n';
    }   
}