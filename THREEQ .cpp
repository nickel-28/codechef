#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

#define pi 3.14159265358979323846
using namespace std;


// bool comp(int a , int b){
//     return (a < b);
// }

// void show(int a[], int array_size){
//     for(int i=0; i<array_size; ++i)
//         cout << a[i] <<" "<< endl;
// }

void solve(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    // cout<<endl;
    cin>>d>>e>>f;
    
    if((a+b+c)==(d+e+f)){
        cout<< "Pass" <<endl;
    }
    // if((a==d || a==e || a==f) && (a==b && b==c)){
    //     cout<< "Pass" <<endl;
    // }
    else
        cout << "Fail" << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
    return 0;
}