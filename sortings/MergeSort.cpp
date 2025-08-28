//MERGE SORT!
//NAME: PRASHANT MISHRA
//MERGE SORT WORKS ON DIVIDE AND MERGE!! 

void merge(vector<int> &arr , int low , int mid , int high){
	vector<int> temp;
	int left = low;
	int right = mid+1;
	while(left<= mid && right<=high){
		if(arr[left]<=arr[right]){
			temp.push_back(arr[left]);
			left++;
		} else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=high){
		temp.push_back(arr[right]);
		right++;
	}
	for(int i = low ; i<= high;i++){
		arr[i] = temp[i-low];
	}
}

void MV(vector<int> &arr , int low , int high){
	if(low >= high) return;
	int mid = (low + high) / 2;
	MV(arr , low , mid);
	MV(arr , mid+1 , high);
	merge(arr , low , mid , high);
}

void mergeSort(vector<int> &arr , int n){
	MV(arr , 0 , n-1);
}

int main(){
	int n;
	cout<<"ENTER NUMBER OF ELEMENTS: ";
	cin>>n;
	
	vector<int> arr;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	mergeSort(arr , n);
	
	cout<<"SORTED ARRAY : " ;
	for(int x:arr){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
	
}
