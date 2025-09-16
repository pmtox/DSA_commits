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
        else cout <<((N - X+3) / 4) << '\n';  //WE CAN USE ceil() to round up the result.
    }
    return 0;
}

//THis is a 570 difficulty problem on 500 to 800 difficulty rating practice track on CODECHEF.
