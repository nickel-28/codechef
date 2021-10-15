//MIXTURE

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(a>0 && b>0) cout<<"Solution"<<endl;
    else if(b==0 && a>0) cout<<"Solid"<<endl;
    else if(a==0 && b>0) cout <<"Liquid"<<endl;
    
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}