//Greater Average PROBLEM
//NAME: PRASHANT MISHRA


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	float A , B , C;
	while(t--){
	    cin >> A >> B>>C;
	    float avgg=(A+B)/2;
	    if(avgg>C){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	} return 0;
}


//USED IF ELSE AND JUST AVERAGE FORMULA
