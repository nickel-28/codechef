// CHSFORMT

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if((a+b)<3)
        cout<<"1"<<endl;
    else if((a+b)>=3 && (a+b)<=10)
        cout<<"2"<<endl;
    else if((a+b)>=11 && (a+b)<=60)
        cout<<"3"<<endl;
    else cout<<"4"<<endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
