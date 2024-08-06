#include<bits/stdc++.h>
using namespace std;

int ncr(int n, int r) {
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd 
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    // cout << p << endl;
    return p;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n, k;
        cin >> n >> k;
        long long ans = 0;
        const int MOD = 1e9 + 7;
        
        int x = 0, ones = 0;
        for(int i=0;i<k;i++) {
            cin >> x;
            ones+=x;
        }
        int p = (k-1)/2;
        if(ones >= p+1) ans++;
        for(int i=k;i<n;i++) {
            cin >> x;
            ones += x;
            // seq of length i + 1, with ones 1s and rem 0
            if(x == 1) {
                for(int j=p;j<ones;j++) {
                    ans += ncr(ones-1, j) * ncr(i+1-ones, k-1-j);
                    ans %= MOD;
                }
            } else {
                for(int j=p+1;j<=ones;j++) {
                    ans += ncr(ones, j)*ncr(i-ones, k-j);
                    ans %= MOD;
                }
            }
        }

        cout << ans << '\n';
    }
}