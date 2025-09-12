//FINDING MAX ELEMENT USING MERGE SORT
//NAME: PRASHANT MISHRA


#include<iostream>
#include<algorithm>
using namespace std;



int mSS(vector<int>&arr , int low, int high){
	if(low == high) return arr[low];
	int mid=(high+low)/2;
	int lft = mSS(arr , low , mid);
	int ryt = mSS(arr , mid+1 , high);
	int maxx = max(lft , ryt);
	return maxx;
}
int main(){
	int n; cout<<"ENTER NUMBER OF ELEMENTS: ";cin>>n;
	vector<int> arr;
	for(int i=0;i<n; i++){
		int x; cin>>x; 
		arr.push_back(x);
	}
	//twoPtr(arr , n);
	int l = mSS(arr , 0 , n-1);
	cout<<"MAX ELEMENT IS : "<<l;
	return 0;
}


//THIS HAS THE WORST COMPLEXIY OF O(N) and best complexity of O(N) too
