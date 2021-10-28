#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%10==0)
        cout<<"0"<<endl;
    else if (n%10!=0){
        n=n*2;
        if(n%10==0)
            cout<<"1"<<endl;
        else cout<<"-1"<<endl;
        
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
