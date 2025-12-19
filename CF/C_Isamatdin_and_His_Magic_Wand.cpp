#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<int> a(n);
        bool hEve = false, hOdd = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) hEve= true;
            else hOdd = true;
        }
        if (hEve && hOdd) {
            sort(a.begin(), a.end());
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

