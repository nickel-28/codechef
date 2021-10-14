//RCBPLAY

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x,y,z,p;
    cin>>x>>y>>z;
    
    p=x+(2*z);
    if(p>=y) cout<<"YES"<<endl;
    else if(p<y) cout<<"NO"<<endl;
    
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
