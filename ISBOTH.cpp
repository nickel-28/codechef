// ISBOTH

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N;
    cin>>N;
    if ((N%5==0 || N%11==0) && (N%11!=0 || N%5!=0)) cout<<"ONE"<<endl;
	else if(N%5==0 && N%11==0) cout<<"BOTH"<<endl;
	else cout<<"NONE"<<endl;
    
}

int main() {
	
	    solve();
	
	return 0;
}
