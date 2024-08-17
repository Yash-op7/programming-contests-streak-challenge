#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define ll long long

const int MOD = 1e9 + 7;

// count monotonic pairs 2, where 1 <= nums[i] <= 1000
class Solution {
public:
    int f(int idx, int li, int ld, auto &a, const int n, auto &t) {
        if(idx == n) return 1;
        if(a[idx] < li) return 0;
        if(t[idx][li] != -1) return t[idx][li];
        ll ans = 0;
        for(int i=li;i<=a[idx];i++) {
            if(a[idx] - i <= ld && a[idx] - i >= 0) {
                ans += f(idx+1, i, a[idx]-i, a, n, t);
                ans = ans % MOD;
            }
        }
        return t[idx][li] = ans;
    }
    int countOfPairs(vector<int>& nums) {
        int n = nums.size();
        vvi t(n, vi(1001, -1));
        return f(0, 0, 1000, nums, n, t);
    }
};