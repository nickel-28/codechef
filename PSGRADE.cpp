// PSGRADE

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int a,b,c,T,p,q,r;
    cin>>a>>b>>c>>T>>p>>q>>r;
    
    if(p>=a && q>=b && r>=c && (p+q+r)>=T) cout<<"YES\n";
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
