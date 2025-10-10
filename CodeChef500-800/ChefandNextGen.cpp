//Chef and NextGen PROBLEM
//NAME: PRASHANT MISHRA


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arry[t];
	for(int i = 0; i< t ; i++){
	    cin>>arry[i] >>arry[i+1] >>arry[i+2]>>arry[i+3];
	    if(arry[i]*arry[i+1] <= arry[i+2]*arry[i+3]){
	        cout<<"YES" <<endl;
	    } else{
	        cout<<"NO" << endl;
	    }
	} return 0;
}

