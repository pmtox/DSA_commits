#include<bits/stdc++.h>
using namespace std;
void isSame(vector<char> ch1 , vector<char>ch2){
    vector<int> freq(26, 0);
        for (char c : ch1) freq[c - 'a']++;
        for (char c : ch2) freq[c - 'a']--;
        bool same = true;
        for (int f : freq)
        if (f != 0) same = false;
        cout << (same ? "YES" : "NO") << endl;
    
}
int main(){
    long long t ; cin>>t;
    for(int i = 0 ; i< t; i++){
        int x; cin>>x;
        vector<char> ch1(x) ; vector<char> ch2(x);
        for(int j = 0 ; j<x ; j++){
            cin>>ch1[j];
        }
        for(int j = 0; j<x ; j++){
            cin>>ch2[j];
        }
        isSame(ch1 , ch2);
    }
    return 0;

}
