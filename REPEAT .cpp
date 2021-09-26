//REPEAT 

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

#define pi 3.14159265358979323846
using namespace std;


void solve(){
    long long int N,K,S;
    cin>>N>>K>>S;
   
    cout << (S-(N*N)) / (K-1) << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
    return 0;
}