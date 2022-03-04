// IMDB

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    ll n,x;
    cin>>n>>x;
    ll s,r,ans = 0;
    for(int i=1; i<=n; i++){
        cin>>s>>r;
        if(s<=x && ans<r)
            ans=r;
    }
    cout<<ans<<"\n";
    
    
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
