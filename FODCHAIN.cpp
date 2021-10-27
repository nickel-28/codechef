// FODCHAIN

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int e,k,x,count=1;
    cin>>e>>k;
    while(e/k>0){
        e=e/k;
        count++;
    }
    cout<<count<<endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
