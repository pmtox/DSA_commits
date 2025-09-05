
int longestSub(vector<int> &arr , int k){
  long long maxLen = 0; int n = arr.size();
  long long right = 0 , left = 0;
  long long sum = arr[0];
  while(right<n){
    while(left <= right && sum >k){
      sum -=arr[left];
      left++;
    } if(sum==k){
      maxLen = max(maxLen , right-left +1);
    } right ++;
    if(right<n) sum+= arr[right];
  } return maxLen;
}
