#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = "";
    while(n > 0) {
        if(n%2 == 0) {
            ans = '0' + ans;
        } else {
            ans = '1' + ans;
        }
        n /= 2;
    }
    // reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}

