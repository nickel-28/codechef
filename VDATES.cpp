// VDATES

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int d,l,r;
    cin>>d>>l>>r;
    if(d>=l && d<=r){
        cout<<"Take second dose now"<<endl;
    }
    else if(d>r){
        cout<<"Too Late"<<endl;
    }
    else if(d<l){
        cout<<"Too Early"<<endl;
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
