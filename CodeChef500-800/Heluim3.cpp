//HELIUM3 PROBLEM-CODECHEF
//NAME : PRASHANT MISHRA
//KEY IDEA: Compare a*b ≤ x*y to check if production meets requirement.
//TIME TAKEN: ~5 minutes solo


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

//TEST CASE:
//INPUT 
// 4
// 1 2 3 4
// 4 3 2 1
// 2 18 9 4
// 1 100 2 49

//OUTPUT
// Yes
// No
// Yes
// No


