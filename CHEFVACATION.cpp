#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x<z && y<z){
        if((x+y)<=z) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
    
    
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
