// PASSORFAIL

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,x,p,y;
    cin>>n>>x>>p;
    y=(x*3)-(n-x)*(1);
    if(y>=p) cout << "PASS" <<endl;
    else cout << "FAIL" <<endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
