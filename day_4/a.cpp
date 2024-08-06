#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        int sum = 0;
        while(n > 0) {
            sum += n%10;
            n /= 10;
        }
        cout << sum << '\n';
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
