#include <bits/stdc++.h>
using namespace std;

bool canBeSorted(vector<long long> a, vector<int> changed) {
    for (int i = 0; i + 1 < a.size(); i++) {
        if (a[i] > a[i + 1]) {
            if (changed[i] == 0 && changed[i + 1] == 0)
                return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> c[i];
        long long ans = LLONG_MAX;
        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> changed(n, 0);
            long long cost = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    changed[i] = 1;
                    cost += c[i];
                }
            }
            if (canBeSorted(a, changed)) {
                ans = min(ans, cost);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
