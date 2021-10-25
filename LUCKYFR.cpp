// LUCKYFR

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,digit,count=0;
    cin>>n;
    
    while(n>0){
        digit=n%10;
        n=n/10;
        
        if(digit==4)
            count++;
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
