// DRUNKALK

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int k,sum=0;
    cin>>k;
    for(int i=1;i<=k;i++){
        if(i%2!=0){
            sum+=3;
        }
        else{
            sum--;
        }
    }
    cout<<sum<<endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
