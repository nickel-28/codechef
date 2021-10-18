// WHICHDIV

#include <iostream>
using namespace std;

void solve(){
    int x;
    cin>>x;
    if(x<1600 && x>=1000){
        cout<<"3" <<endl;
    }
    else if(x>=1600 && x<2000){
        cout  << "2" <<endl;
    }
    else cout <<"1"<<endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
