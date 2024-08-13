#include<bits/stdc++.h>
using namespace std;

void solve() {
    int y;
    cin >> y;
    string x = to_string(y);
    int n = x.length();
    if(n < 3) {
        cout << "NO\n";
        return;
    }
    if(x[0] == '1') {
        if(x[1] == '0') 
        {
            if(x.length() == 3) {
                if(x[2] >= '2') {
                    cout << "YES\n";
                    return;
                }
            } else {
                if(x[2] >= '1') {
                cout << "YES\n";
                return;
            }
        }
    }
    }
    cout << "NO\n";
    return;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
}