//SECOND LARGEST PROBLEM
//NAME: PRASHANT MISHRA

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	int a , b , c;
	while(t--){
	    cin>>a>>b>>c;
	    cout<<a+b+c-max({a,b,c}) - min({a,b,c}) <<endl;
	}
}

//WE USED max() and min() in this problem.
//Also we could use the if-else conditional statements in this.
