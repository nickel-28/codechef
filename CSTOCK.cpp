#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    float s,a,b,c;
    cin>>s>>a>>b>>c;
    float x,y;
    x=(s*c)/100;
    y=s+x;
    // cout<<y<<"\n";
    if(y>=a && y<=b) cout<<"YES\n";
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
