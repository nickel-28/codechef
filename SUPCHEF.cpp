// SUPCHEF

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int m,n,k;
    cin>>m>>n>>k;
    if(m>(n*k)){
        cout<<"YES"<<endl;
    }
    else if(m<=(n*k)){
        cout<<"NO"<<endl;
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
