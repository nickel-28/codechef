// LUCKFOUR

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,count=0,rem;
    cin>>n;
    
    while(n!=0){
        rem=n%10;
        if(rem==4) count++;
        n=n/10;
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
