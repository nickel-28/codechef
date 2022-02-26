// FRGAME

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // if((a+c)>=(b+d)) cout<<"N\n";
    // else if((a+c)<(b+d)) cout<<"S\n";
    
    // if(a>=b){
    //     if((a+c)>=(b+d)) cout<<"N\n";
    //     else cout<<"S\n";
    // }
    // else if(a<b){
    //     if((a+c)>(b+d)) cout<<"S\n";
    //     else cout<<"S\n";
    // }
    // // cout<<"S\n";
    if(a>=b){
        if((b+c)>a){
            if((b+c)>(a+d)) cout<<"S\n";
            else cout<<"N\n";
        }
        else if((b+c)<a){
            if((b+c+d)<=a) cout<<"N\n";
            else cout<<"S\n";
        }
    }
    else if(a<b){
        if((a+c)>=b){
            if((a+c)<(b+d)) cout<<"S\n";
            else cout<<"N\n";
        }
        else if((a+c)<b){
            if((a+c+d)>=b) cout<<"N\n";
            else cout<<"S\n";
        }
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
