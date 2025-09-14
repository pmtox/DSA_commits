//Water Filling PROBLEM
//NAME: PRASHANT MISHRA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
	int a, b ,c;
	for (int i = 0; i<t; i++){
	    cin>>a >>b>>c;
	    int cnt = a+b+c;
	    if(cnt <= 1){
	        cout<<"Water filling time"<< endl;
	    } else if(cnt >= 2){
	        cout<<"Not now" << endl;
	    }
    }
    return 0;
}

