#include <bits/stdc++.h>

using namespace std;

void solve(){
    int l,r;
    cin>>l>>r;
    
    for(int i=l; i<=r; i++){
        if(i%2!=0)
            cout<<i<<" ";
    }
    
}

int main() {
	solve();
	
	return 0;
}
