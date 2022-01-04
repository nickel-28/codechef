// EQUALCOIN

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    ll x,y,m,n;
    cin>>x>>y;
    // m=x;
    // n=2*y;
    // if((m+n)%2==0 && m%2==0 && n%2==0) cout<<"YES"<<endl;
    // else if((m+n)%2!=0) cout<<"NO"<<endl;
    // if(x%2==0 && y%2==0 && (x+y)%2==0 || (x==0 && y==0) || (x!=0 && y==0) || (x==0 && y!=0)) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    if(y%2==0){
        if(x%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(y%2!=0){
        if(x%2==0 && x>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
