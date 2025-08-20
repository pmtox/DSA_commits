//Chef and Candies
//NAME: Prashant Mishra
//Difficulty:  570

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; 
    cin >> t;
    while(t--){
        int N, X;
        cin >> N >> X;
        if (X >= N) cout << 0 << '\n';
        else cout <<((N - X+3) / 4) << '\n';
    }
    return 0;
}

//
