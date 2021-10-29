// CCBTS01

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    int p=0, c=0, m=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='P') p++;
    }
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='C') c++;
    }
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='M') m++;
    }
    
    if(p==1 && c==1 & m==1 & p+c+m==3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
