#include<iostream>
using namespace std;
int main(){
        long long x , y  , z;
        char opt , k;
        cin>>x >> opt>>y >> k>> z;
        long long sum = x+y;
        long long sub = x-y;
        long long mul = x*y;

    if(opt == '+' && sum == z){
            cout<<"Yes"<<endl;
    } else if(opt == '-' && sub == z){
            cout<<"Yes"<<endl;
    } else if(opt == '*' && mul == z){
            cout<<"Yes"<<endl;
    } else{
            if(opt == '+'){
                cout<<sum<<endl;
            } else if(opt == '*'){
                cout<<mul<<endl;
            }
            else if(opt == '-'){
                cout<<sub<<endl;
            }
        }
    return 0;
}