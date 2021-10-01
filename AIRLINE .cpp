#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

#define pi 3.14159265358979323846
using namespace std;



void solve(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    if((a+b)<=d && c<=e){
        cout<< "YES" <<endl;
    }
    else if((b+c)<=d && a<=e){
        cout<< "YES" <<endl;
    }
    else if((c+a)<=d && b<=e){
        cout<< "YES" <<endl;
    }
    else cout << "NO"<<endl;
    
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
    return 0;
}