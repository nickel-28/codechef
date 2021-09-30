#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

#define pi 3.14159265358979323846
using namespace std;



void solve(){
    int N,K,L,y;
    cin>>N>>K>>L;
    int S[N];
    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    
    int count=0;
     if(K>0)
        S[N-1]+=K*(L-1);
    for(int i=0; i<(N-1); i++){
       

        if(S[N-1]<=S[i]){
            count++;
        }
    }
    if(count==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
   
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
    return 0;
}