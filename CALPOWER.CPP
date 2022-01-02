// CALPOWER

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int sum=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0; i<s.length(); i++){
        
        int pw=s[i]-96;
        sum+=(i+1)*pw;
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
