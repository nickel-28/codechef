// CHEFCONTEST

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int x,y,p,q;
    cin>>x>>y>>p>>q;
    
    int m,n;
    m=x+(10*p);
    n=y+(10*q);
    if(m<n) cout<<"Chef\n";
    else if(m>n) cout<<"Chefina\n";
    else if(m==n) cout<<"Draw\n";
    
    
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
