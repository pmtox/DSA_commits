//Search an element in an array
//Name : PRASHANT MISHRA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0 ; i <n ; i++){
        cin>> a[i];
    }
    if(find(a.begin() , a.end() , x) != a.end()){
        cout<< "YES" << endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}

//This works in O(N) Time Complexity.
//Take O(1) Space Complexity
