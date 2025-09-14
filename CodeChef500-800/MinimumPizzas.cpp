//Minimum Pizzas PROBLEM
//NAME: PRASHANT MISHRA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, X;
        cin >> N >> X;
        int total = N * X;
        int pizzas = (total + 3) / 4;
        cout << pizzas << endl;
    }
    return 0;
}

