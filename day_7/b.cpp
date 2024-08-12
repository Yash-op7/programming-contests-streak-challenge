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

bool solve(int a, int b, int x, int y, auto&alice, auto&bob) {
    // a b
    // x y
    if(a == b) {
        return alice[a] != bob[x];
    }
    if(alice[a] == bob[x]) {
        if(alice[b] == bob[y]) {
            return solve(a+1, b, x+1, y, alice, bob) | solve(a, b-1, x, y-1, alice, bob);
        } else {
            return true;
        }
    } else {
        if(alice[b] == bob[y]) {
            return true;
        } else {
            // a b
            // y x
            if(alice[a] == bob[y]) {
                if(alice[b] == bob[x]) {
                    return solve(a+1, b, x, y-1, alice, bob) | solve(a, b-1, x+1, y, alice, bob);
                } else {
                    return true;
                }
            } else {
                if(alice[b] == bob[x]) {
                    return true;
                } else {
                    return true;
                }
            }
        }
    }
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int>a(n), b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        if(solve(0, n-1, 0, n-1, a, b)) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
}