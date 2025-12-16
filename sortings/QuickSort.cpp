//QUICK SORT
//NAME: PRASHANT MISHRA


#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr , int low , int high){
	int pivot = arr[low];
	int i = low;
	int j = high;
	while(i<j){
		while(arr[i]<=pivot && i<=high-1){
			i++;
		}
		while(arr[j] > pivot && j>= low+1){
			j--;
		}
		if(i<j){
			swap(arr[i] , arr[j]);
		}
	}
	swap(arr[low] , arr[j]);
	return j;
}
void qs(vector<int> &arr , int low , int high ){
	if(low<high){
		int Pindex= partition(arr ,low , high);
		qs(arr, low , Pindex -1);
		qs(arr , Pindex+1 , high);
	}
}
vector<int> QuickSort(vector<int> &arr){
	qs(arr , 0 , arr.size()-1);
	return arr;
}
int main(){
	int t; cout<<"ENTER NUMBER OF ELEMENTS: ";cin>>t;
	vector<int> arr;
	for(int i = 0 ; i<t; i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	QuickSort(arr);
	cout<<"SORTED ARRAY: ";
	for(int x:arr){
		cout<<x<<" ";
	} return 0;
}
