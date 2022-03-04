// CCISLAND

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    float x,y,p,q,d,m;
    cin>>x>>y>>p>>q>>d;
    
    x=x/p;
    y=y/q;
    m=min(x,y);
    // cout<<min(x,y)<<"\n";
    if(m>=d) cout<<"YES\n";
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
