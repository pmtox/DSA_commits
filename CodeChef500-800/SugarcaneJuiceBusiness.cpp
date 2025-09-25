//Sugarcane Juice Business PROBLEM
//NAME: PRASHANT MISHRA



#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	int a;
	for(int i =0; i<t;i++){
	    cin>>a;
	    double tot = a*50;
	    long long k = tot - (tot*70/100);
	    cout<< k <<endl;
	}
}
