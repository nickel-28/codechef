// RECTANGL

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c && b==d)
        cout<<"YES"<<endl;
    else if(a==b && c==d)
        cout<<"YES"<<endl;
    else if(a==d && b==c)
        cout<<"YES"<<endl;
    
    else cout <<"NO"<<endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
