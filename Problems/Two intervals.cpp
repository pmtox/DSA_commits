#include<iostream>
using namespace std;
int main(){
    long long i , j  , k , l;
    cin>>i>>j>>k>>l;
    long long start = max(i , k);
    long long end = min(j , l);
    if(start <= end){
        cout<<start<<" "<<end;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}