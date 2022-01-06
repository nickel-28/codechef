// UTKPLC

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void bsdk(){
    char P[3];
    for(int i=0; i<3; i++){
        cin>>P[i];
    }
    // for(int i=0; i<3; i++){
    //     cout<<P[i]<<" ";
    // }
    // cout<<"\n";
    char x,y;
    cin>>x>>y;
    for(int i=0; i<3; i++){
        if((x==P[0] && y==P[1]) || (y==P[0] && x==P[1])){
            cout<<P[0]<<"\n";
            break;
        } 
        if((x==P[1] && y==P[2]) || (x==P[2] && y==P[1])){
            cout<<P[1]<<"\n";
            break;
        } 
        if((x==P[0] && y==P[2]) || (x==P[2] && y==P[0])){
            cout<<P[0]<<"\n";
            break;
        } 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin >> t;
	while(t--){
	    bsdk();
	}
	return 0;
}
