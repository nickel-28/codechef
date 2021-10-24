// CLIPLX

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    
    // if(x%y==0) cout<<y<<endl;
    // else cout<<"0"<<endl;
    if(x>y) cout <<x-y<<endl;
    else cout <<min(0,x)<<endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
