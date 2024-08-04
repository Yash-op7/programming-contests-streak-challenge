#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll>
#define ll long long
#define pb push_back

int solve()
{
    ll n;
    ll k;
    cin >> n >> k;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i] % k;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int l = a[0];
    int r = l + k;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int l2 = a[i];
        int r2 = l2 + k;
        if (r > l2)
        {
            l = l2;
            r = r;
        }
        else if (r == l2)
        {
            return -1;
        } else {
            double dist = (l2 - l);
            dist /= k;
            dist /= 2;
            dist -= (int)(dist);
            if(dist > 0.5) {
                l3 = l
            } else if (dist == 0.5) {
                return -1;
            }
            else {

            }
        }
    }
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        cout << solve() << '\n';
    }
}
