// SECLAR

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a<b && b<c) || (a>b && b>c)) cout<<b<<endl;
    else if((b<c && c<a) || (b>c && c>a)) cout<<c<<endl;
    else if((c<a && a<b) || (c>a && a>b)) cout<<a<<endl;
    
    
}

int main() {
	    solve();
	return 0;
}
