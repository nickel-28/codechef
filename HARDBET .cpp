//HARDBET 

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
    int a,b,c;
    cin>>a>>b>>c;
    
    if(b<c && b< a)
        cout << "Bob"<<endl;
    else if(c<a && c<b)
        cout << "Alice"<<endl;
    else
        cout<<"Draw"<<endl;

}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
    return 0;
}