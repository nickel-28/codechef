// THREEBOX

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b+c)<=d) cout <<"1"<<endl;
    else{
        if((a+b)<=d || (b+c)<=d || (a+c)<=d) cout<<"2"<<endl;
        else cout<<"3"<<endl;
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
