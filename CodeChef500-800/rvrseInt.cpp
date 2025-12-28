//REVERSE INTEGER PROBLEM
//NAME: PRASHANT MISHRA


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    int a;
    while(t--){
        cin>>a;
        int reverse = 0;
        while(a>0){
            int dig = a%10;
            reverse = reverse*10+dig;
            a = a/10;
 
        }
        cout<<reverse<<endl;
    }
}


//WE USED SIMPLE MATHEMATICAL OPERATIONS IN THIS.
// WE CAN ALSO USE string in this to reverse using reverse();
